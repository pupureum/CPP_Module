/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:22 by plee              #+#    #+#             */
/*   Updated: 2022/01/09 00:54:36 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("a");
	ScavTrap b("b");

	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	b.guardGate();
	std::cout << std::endl;
	return (0);
}