/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:53:16 by plee              #+#    #+#             */
/*   Updated: 2022/01/15 03:57:00 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("presidentialpardonform", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): Form("presidentialpardonform", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialpardonform) : Form(presidentialpardonform) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm&   PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialpardonform)
{
	Form::operator=(presidentialpardonform);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	isExecutable(executor);
	std::cout << "<" << _target << "> has been pardoned by Zafod Beeblebrox. " << std::endl;
}