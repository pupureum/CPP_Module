/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:40:39 by plee              #+#    #+#             */
/*   Updated: 2022/01/14 22:37:39 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade): _name(name)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException("Grade is too high!");
		else if (grade > 150)
			throw GradeTooLowException("Grade is too low!");
		else
			_grade = grade;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade) {} 

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	_grade = bureaucrat._grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
} 

unsigned int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::upGrade(void)
{
	try
	{
		if (_grade < 2)
			throw GradeTooHighException("Grade is too high to upgrade! The highest grade is 1");
		else
			_grade -= 1;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::downGrade(void)
{
	try
	{
		if (_grade > 149)
		throw GradeTooLowException("Grade is too low to downgrade! The lowest grade is 150");
		else
			_grade += 1;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}	
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		if (form.beSigned(*this) == true)
			std::cout << "bureaucrat <" << _name << "> signs form <" << form.getName() << ">" << std::endl;
		else
			throw GradeTooLowException("");
	}
	catch (std::exception& e)
	{
		std::cout << "bureaucrat <" << _name << "> cannot sign <"
		<< form.getName() << "> because bureaucrat has lower grade than <" << form.getGradeToSign() << ">" << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char* message) : _message(message) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {};

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (_message);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* message) : _message(message) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {};

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (_message);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& breaucrat)
{
  os << "<" << breaucrat.getName() << ">, bureaucrat grade <" << breaucrat.getGrade() << ">";
  return (os);
}