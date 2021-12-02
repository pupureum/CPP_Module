/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:27:06 by plee              #+#    #+#             */
/*   Updated: 2021/12/02 20:35:28 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombie = newZombie("name1");
	std::cout << "A new zombie has been created on heap!" << std::endl;
	
	randomChump("name2");
	std::cout << "A new zombie has been created on stack!" << std::endl;

	delete zombie;
	std::cout << "Delete zombie on heap!" << std::endl;
	return (0);
}