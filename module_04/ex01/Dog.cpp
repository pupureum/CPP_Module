/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:37:46 by plee              #+#    #+#             */
/*   Updated: 2022/01/11 00:01:59 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Dog Class */

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default " << _type << " created" << std::endl;
}

Dog::Dog(const Dog& dog)
{
	_type = dog._type;
	std::cout << "<" << _type << "> copy constructed" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "<" << _type << "> destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	_type = dog._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

/* WrongDog Class */

WrongDog::WrongDog(void) : WrongAnimal("WrongDog")
{
	std::cout << "Default " << _type << " created" << std::endl;
}

WrongDog::WrongDog(const WrongDog& wrong_dog)
{
	_type = wrong_dog._type;
	std::cout << "<" << _type << "> copy constructed" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "<" << _type << "> destroyed" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& wrong_dog)
{
	_type = wrong_dog._type;
	return (*this);
}

void WrongDog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}