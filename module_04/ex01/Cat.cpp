/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:12:35 by plee              #+#    #+#             */
/*   Updated: 2022/01/10 23:41:58 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Cat Class */

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default " << _type << " created" << std::endl;
}

Cat::Cat(const Cat& cat)
{
	_type = cat._type;
	std::cout << "<" << _type << "> copy constructed" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "<" << _type << "> destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	_type = cat._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

/* WrongCat Class */

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Default " << _type << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrong_cat)
{
	_type = wrong_cat._type;
	std::cout << "<" << _type << "> copy constructed" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "<" << _type << "> destroyed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrong_cat)
{
	_type = wrong_cat._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
