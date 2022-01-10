/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:22 by plee              #+#    #+#             */
/*   Updated: 2022/01/09 00:25:00 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("a");
	ClapTrap b("b");
	ClapTrap c("c");

	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;
	c.attack("b");
	b.takeDamage(c.getAttackDamage());
	std::cout << std::endl;
	a.beRepaired(5);
	b.beRepaired(5);
	std::cout << std::endl;
	return (0);
}