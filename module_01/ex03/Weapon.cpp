/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:57:00 by plee              #+#    #+#             */
/*   Updated: 2021/12/09 16:15:32 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << "Weapon constructor is called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor is called" << std::endl;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string& Weapon::getType(void) const
{
	return (_type);
}