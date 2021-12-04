/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:36:35 by plee              #+#    #+#             */
/*   Updated: 2021/12/03 18:17:51 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int num;
	Zombie* zombie;

	std::cout << "Please enter the number of zombies you want to create! (1 ~ 100) " << std::endl;
	std::cin >> num;
	if (num > 0 && num <= 100)
	{
		zombie = zombieHorde(num, "plee");
		for (int i = 0; i < num; i++)
			zombie[i].announce();
		delete[] zombie;
	}
	else
		std::cout << "Wrong Input!" << std::endl;
	return (0);
}