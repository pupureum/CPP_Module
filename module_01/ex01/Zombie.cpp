/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:36:58 by plee              #+#    #+#             */
/*   Updated: 2021/12/05 00:29:40 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "<" << _name << ">" << " Zombie constructor is called" << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Zombie constructor is called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " Zombie destructor is called" << std::endl;	
}

void Zombie::announce(void)
{
	std::cout << "<" << _name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}