/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:27:06 by plee              #+#    #+#             */
/*   Updated: 2021/12/05 00:39:31 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombie = newZombie("Heap");
	std::cout << std::endl;

	randomChump("Stack");
	std::cout << std::endl;

	delete zombie;
	return (0);
}