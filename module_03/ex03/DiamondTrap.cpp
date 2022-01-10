/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 20:49:25 by plee              #+#    #+#             */
/*   Updated: 2022/01/10 15:20:09 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(std::string("Unknown") + "_clap_name"), _name("UnknownDiamondTrap")
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
	std::cout << "DiamondTrap <" << _name << "> has been destroyed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	ClapTrap::_name = diamondTrap.ClapTrap::getName();
	this->_name = diamondTrap.getName();
	this->_hitPoints = diamondTrap.getHitPoints();
	this->_energyPoints = diamondTrap.getEnergyPoints();
	this->_attackDamage = diamondTrap.getAttackDamage();
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap and also ClapTrap" << std::endl;
	std::cout << "DiamondTrap name  : " << _name << std::endl;
	std::cout << "ClapTrap name     : " << ClapTrap::_name << std::endl;
}