/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 04:57:44 by plee              #+#    #+#             */
/*   Updated: 2022/01/15 05:48:18 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}
Intern::Intern(const Intern& intern){ (void)intern; }
Intern::~Intern(void) {}
Intern& Intern::operator=(const Intern& intern)
{
	(void)intern;
	return (*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::string form_type[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int form_num = std::find(form_type, form_type + 3, name) - form_type;
	
	switch (form_num)
	{
	case 0:
		std::cout << "Intern creates <ShrubberyCreationForm>" << std::endl;
		return (new ShrubberyCreationForm(target));
		break;
	case 1:
		std::cout << "Intern creates <RobotomyRequestForm>" << std::endl;
		return (new RobotomyRequestForm(target));
		break;
	case 2:
		std::cout << "Intern creates <PresidentialPardonForm>" << std::endl;
		return (new PresidentialPardonForm(target));
		break;
	default:
		std::cout << "Form " << name << " does not exist." << std::endl;
		return (NULL);
	}
}
