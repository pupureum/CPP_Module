/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:26:26 by plee              #+#    #+#             */
/*   Updated: 2022/01/13 04:03:54 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	//test1
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;

	//test2 array
	const Animal*	animals[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2) animals[i] = new Dog();
			else animals[i] = new Cat();
	}

	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//test3 assign operator
	Dog	dog;
	Brain	*dogBrain = dog.getBrain();
	dogBrain->setIdeas(1, "EAT");
	dogBrain->setIdeas(2, "EAT2");
	std::cout << "Dog: " << dogBrain->getIdeas(1) << std::endl;
	std::cout << "Dog: " << dogBrain->getIdeas(2) << std::endl;
	std::cout << std::endl;

	Dog	dog_copy;
	Brain	*copiedDogBrain = dog_copy.getBrain();
	copiedDogBrain->setIdeas(1, "SLEEP");
	copiedDogBrain->setIdeas(2, "SLEEP2");
	std::cout << "Dog copy: " << copiedDogBrain->getIdeas(1) << std::endl;
	std::cout << "Dog copy: " << copiedDogBrain->getIdeas(2) << std::endl;
	std::cout << std::endl;

	dog_copy = dog;
	std::cout << "Dog copy: " << copiedDogBrain->getIdeas(1) << std::endl;
	std::cout << "Dog copy: " << copiedDogBrain->getIdeas(2) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	//test4 copy constructor
	Cat *cat = new Cat();
	std::cout << std::endl;
	Cat *cat_copy = new Cat(*cat);
	std::cout << std::endl;

	delete cat_copy;
	delete cat;
	return (0);
}