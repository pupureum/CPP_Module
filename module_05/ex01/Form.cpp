/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:52:06 by plee              #+#    #+#             */
/*   Updated: 2022/01/14 02:36:22 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Defualt"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const std::string name, const unsigned int gradeToSign, const unsigned int gradeToExecute)
: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	
}

Form::Form(const Form& form)
: _name(form.getName()), _gradeToSign(form.getGradeToSign()), _gradeToExecute(form.getGradeToExecute())
{
	
}

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

