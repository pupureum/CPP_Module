/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:07:25 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 01:40:07 by plee             ###   ########.fr       */
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

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
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

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap <" << _name << "> attack <" << target
			  << ">, causing <" << _attackDamage << "> points of damage" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount)
	{
		_hitPoints = 0;
		std::cout << "ScavTrap <" << this->_name << "took damage <"<< amount << ">\n"
				  << _name << "is died" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ScavTrap <" << this->_name << "> took damage<"<< amount << ">\n"
				  << "The remaining hp is " << _hitPoints <<  std::endl; 
	}
	
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap <" << _name << "> have enterred in Gate keeper mode" << std::endl;
}