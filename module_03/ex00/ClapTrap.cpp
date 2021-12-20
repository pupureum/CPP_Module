/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:17 by plee              #+#    #+#             */
/*   Updated: 2021/12/19 23:26:02 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap was created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap <" << _name << "> was created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	std::cout << "Copy ClapTrap was created" << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap has been destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	this->_name = clapTrap.getName();
	this->_hitPoints = clapTrap.getHitPoints();
	this->_energyPoints = clapTrap.getEnergyPoints();
	this->_attackDamage = clapTrap.getAttackDamage();
	return (*this);
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap <" << _name << "> attack <" << target
			  << ">, causing <" << _attackDamage << "> points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap <" << this->_name << "took damage <"<< amount << ">\n"
				  << _name << "is died" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap <" << this->_name << "> took damage<"<< amount << ">\n"
				  << "The remaining hp is " << _hitPoints <<  std::endl; 
	}
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	std::cout << "ClapTrap" << " <" << _name << "> got repaired " << amount <<"\n"
			  << "The remaining hp is <" << _hitPoints << ">" << std::endl;
}
