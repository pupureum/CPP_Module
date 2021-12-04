/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:57:00 by plee              #+#    #+#             */
/*   Updated: 2021/12/03 23:18:44 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << "Weapon constructor is callde" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon distructor is callde" << std::endl;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string& Weapon::getType(void) const
{
	return (_type);
}