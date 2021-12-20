/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 20:49:25 by plee              #+#    #+#             */
/*   Updated: 2021/12/21 03:20:08 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(std::string("Unknown") + "_clap_name"), _name("Unknown")
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "Default DiamondTrap was created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap <" << _name << "> was created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap)
{
	std::cout << "Copy DiamondTrap was created" << std::endl;
	*this = diamondTrap;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap has been destroyed" << std::endl;
}