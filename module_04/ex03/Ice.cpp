/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 03:28:09 by plee              #+#    #+#             */
/*   Updated: 2022/01/13 04:23:39 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}
Ice::Ice(std::string const & type) : AMateria(type) {}
Ice::Ice(const Ice& ice) : AMateria(ice._type) {}
Ice::~Ice(void) {}

Ice& Ice::operator=(const Ice& ice)
{
	_type = ice._type;
	return (*this);
}

AMateria* Ice::clone(void) const
{
	Ice* ice = new Ice;
	return (ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}