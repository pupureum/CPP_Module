/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 20:12:49 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 20:48:09 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default ScavTrap was created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap <" << _name << "> was created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
	std::cout << "Copy ScavTrap was created" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap has been destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	this->_name = fragTrap.getName();
	this->_hitPoints = fragTrap.getHitPoints();
	this->_energyPoints = fragTrap.getEnergyPoints();
	this->_attackDamage = fragTrap.getAttackDamage();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap <" << this->_name << "> wants to high five!" << std::endl;
}