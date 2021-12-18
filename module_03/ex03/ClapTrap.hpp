/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:19 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 21:09:39 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
	
public:
	ClapTrap(void);
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap& claptrap);
	~ClapTrap(void);

	ClapTrap& operator=(const ClapTrap& claptrap);

	std::string	getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif