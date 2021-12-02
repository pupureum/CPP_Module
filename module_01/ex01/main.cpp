/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:36:35 by plee              #+#    #+#             */
/*   Updated: 2021/12/02 21:08:43 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int num;

	std::cout << "Please enter the number of zombies you want to create! (1 ~ 100) " << std::endl;
	std::cin >> num;
	if (num > 0 && num <= 100)
	{
		for (int i = 0; i < num; i++)
		{
			Zombie* zombie = zombieHorde(num, "plee");
		}
	}
	else
		std::cout << "Wrong Input!" << std::endl;
	// delete[] zombie;
	return (0);
}