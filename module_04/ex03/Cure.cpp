/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 03:22:14 by plee              #+#    #+#             */
/*   Updated: 2022/01/12 03:33:13 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}
Cure::Cure(std::string const & type) : AMateria(type) {}
Cure::Cure(const Cure& cure) : AMateria(cure._type) {}
Cure::~Cure(void) {}

Cure& Cure::operator=(const Cure& cure)
{
	_type = cure._type;
	return (*this);
}

AMateria* Cure::clone(void) const
{
	Cure* cure = new Cure;
	return (cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}