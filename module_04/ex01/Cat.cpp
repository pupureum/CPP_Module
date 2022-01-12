/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:12:35 by plee              #+#    #+#             */
/*   Updated: 2022/01/13 03:38:13 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Cat Class */

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default " << _type << " created" << std::endl;
	_brain = new Brain;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << "<" << _type << "> copy constructed" << std::endl;
	_brain = new Brain(*cat._brain);
}

Cat::~Cat(void)
{
	std::cout << "<" << _type << "> destroyed" << std::endl;
	if (_brain)
		delete _brain;
}

Cat& Cat::operator=(const Cat& cat)
{
	_type = cat._type;
	*_brain = *cat._brain;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain(void) const
{
	return(_brain);
}