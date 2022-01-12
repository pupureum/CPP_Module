/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 21:40:59 by plee              #+#    #+#             */
/*   Updated: 2022/01/13 05:48:41 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Default"){}
AMateria::AMateria(std::string const & type) : _type(type) {}
AMateria::AMateria(const AMateria& amateria) : _type(amateria._type) {}
AMateria::~AMateria(void) {}

AMateria& AMateria::operator=(const AMateria& amateria)
{
	_type = amateria._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}