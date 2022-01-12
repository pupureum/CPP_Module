/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:26:26 by plee              #+#    #+#             */
/*   Updated: 2022/01/13 00:51:24 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
	std::cout << std::endl;

	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* b = new WrongDog();
	const WrongAnimal* a = new WrongCat();

	std::cout << b->getType() << " " << std::endl;
	std::cout << a->getType() << " " << std::endl;

	a->makeSound();
	b->makeSound();
	beta->makeSound();
	
	delete a;
	delete b;
	delete beta;
	return (0);
}