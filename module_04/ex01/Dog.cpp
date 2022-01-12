/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:37:46 by plee              #+#    #+#             */
/*   Updated: 2022/01/13 01:26:54 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Dog Class */

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default " << _type << " created" << std::endl;
	_brain = new Brain;
}

Dog::Dog(const Dog& dog)
{
	std::cout << "<" << _type << "> copy constructed" << std::endl;
	_type = dog._type;
	_brain = new Brain(*dog._brain);
}

Dog::~Dog(void)
{
	std::cout << "<" << _type << "> destroyed" << std::endl;
	if (_brain)
		delete _brain;
}

Dog& Dog::operator=(const Dog& dog)
{
	_type = dog._type;
	*_brain = *dog._brain;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain(void) const
{
	return (_brain);
}