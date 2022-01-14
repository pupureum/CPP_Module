/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:29:40 by plee              #+#    #+#             */
/*   Updated: 2022/01/15 03:55:59 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyrequestform): Form(robotomyrequestform) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm robotomyrequestform)
{
	Form::operator=(robotomyrequestform);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	isExecutable(executor);
	srand(time(NULL));
	if ((rand() % 2) == 0)
	{
		std::cout << "Driling noises... <" << _target << "> has been robotomized successfully! 50% of the time!" << std::endl;
	}
	else
	{
		std::cout << "Failed to robotomize <" << _target << ">!" << std::endl;
	}
}