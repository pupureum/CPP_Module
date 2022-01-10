/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:22 by plee              #+#    #+#             */
/*   Updated: 2022/01/10 18:08:53 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("a");
	DiamondTrap b("b");
	
	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	std::cout << std::endl;
	std::cout << "<" << a.getName() << "> has "
		<< a.getHitPoints() << " hitpoint(s) left.." << std::endl;
	std::cout << "<" << b.getName() << "> has "
		<< b.getHitPoints() << " hitpoint(s) left.." << std::endl;	
	
	std::cout << std::endl;
	a.highFivesGuys();

	std::cout << std::endl;
	a.whoAmI();
	b.whoAmI();
	return (0);
}