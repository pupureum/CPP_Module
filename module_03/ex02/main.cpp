/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:54:22 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 20:48:05 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("a");
	FragTrap b("b");

	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	b.highFivesGuys();
	std::cout << std::endl;
	return (0);
}