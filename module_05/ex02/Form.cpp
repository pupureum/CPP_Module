/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:52:06 by plee              #+#    #+#             */
/*   Updated: 2022/01/15 04:32:35 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Defualt"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const std::string name, const unsigned int gradeToSign, const unsigned int gradeToExecute)
: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	try
	{
		if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw GradeTooHighException("Grade is too high!");
		else if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw GradeTooLowException("Grade is too low!");
		else
			_isSigned = false;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form(const Form& form)
: _name(form.getName()), _gradeToSign(form.getGradeToSign()), _gradeToExecute(form.getGradeToExecute()) {}

Form::~Form(void) {}

Form& Form::operator=(const Form& form)
{
	_isSigned = form._isSigned;
	return (*this);
}

std::string Form::getName() const { return _name; }
bool Form::getIsSigned() const { return _isSigned; }
unsigned int Form::getGradeToSign() const { return _gradeToSign; }
unsigned int Form::getGradeToExecute() const { return _gradeToExecute; }

bool	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <=_gradeToSign)
	{
		_isSigned = true;
		return (true);
	}
	_isSigned = false;
	return (false);
}

void Form::isExecutable(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw(NotSignedException("Sign form before execute"));
	else if (executor.getGrade() > this->getGradeToExecute())
		throw(GradeTooLowException("Grade is too low to execute form"));
}

Form::GradeTooHighException::GradeTooHighException(const char* message): _message(message) {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Form::GradeTooHighException::what() const throw()
{
	return (_message);
}

Form::GradeTooLowException::GradeTooLowException(const char* message): _message(message) {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Form::GradeTooLowException::what() const throw()
{
	return (_message);
}

Form::NotSignedException::NotSignedException(const char* message): _message(message) {}

Form::NotSignedException::~NotSignedException() throw() {}

const char*   Form::NotSignedException::what() const throw() {
  return (_message);
}

Form::ExcuteException::ExcuteException(const char* message): _message(message) {}

Form::ExcuteException::~ExcuteException() throw() {}

const char*   Form::ExcuteException::what() const throw() {
  return (_message);
}

std::ostream& operator<<(std::ostream& os, Form& form)
{
	os << "<" << form.getName() << ">, signed <";
	if (form.getIsSigned())
		os << "Yes>, ";
	else
		os << "No>, ";
	os << "grade required to sign <" << form.getGradeToSign() << ">, ";
	os << "grade required to execute <" << form.getGradeToExecute() << ">";
	return (os);
}