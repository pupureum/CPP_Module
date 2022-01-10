/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:14:32 by plee              #+#    #+#             */
/*   Updated: 2022/01/10 23:55:27 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Animal Class */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Default " << _type << " created" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal : " << _type << " was created" << std::endl;
}

Animal::Animal(const Animal& animal) 
{
	_type = animal._type;
	std::cout << "<" << _type << "> copy constructed" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "<" << _type << "> destroyed" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	_type = animal._type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal" << std::endl;
}

/* WrongAnimal Class */

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "Default WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "<" << _type << "> created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrong_animal)
{
	_type = wrong_animal._type;
	std::cout << "<" << _type << "> copy constructed" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Animal <" << _type << "> destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrong_animal)
{
	_type = wrong_animal._type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong animal" << std::endl;
}
