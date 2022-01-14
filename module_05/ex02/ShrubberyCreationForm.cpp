/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:02:38 by plee              #+#    #+#             */
/*   Updated: 2022/01/15 04:43:24 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShruberryCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShruberryCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm) : Form(shrubberyCreationForm.getName(), 145, 137){}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberyCreationForm)
{
	Form::operator=(shrubberyCreationForm);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		isExecutable(executor);

		std::cout << _target << "_shrubbery created " << std::endl;
		std::string filename = _target + "_shrubbery";
		std::fstream output;
		output.open(filename, std::ios::out);
		if (output.fail())
			throw ExcuteException("File open failed");
		output << SHRUBBERY;
		output.close();
	}	
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		throw(GradeTooLowException(e.what()));
	}
}