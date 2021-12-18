/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:07:25 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 20:46:51 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{	
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default ScavTrap was created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{	
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap <" << _name << "> was created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
	std::cout << "Copy ScavTrap was created" << std::endl;
	*this = scavTrap;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap has been destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	this->_name = scavTrap.getName();
	this->_hitPoints = scavTrap.getHitPoints();
	this->_energyPoints = scavTrap.getEnergyPoints();
	this->_attackDamage = scavTrap.getAttackDamage();
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap <" << _name << "> have enterred in Gate keeper mode" << std::endl;
}