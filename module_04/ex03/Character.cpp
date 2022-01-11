/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 23:48:32 by plee              #+#    #+#             */
/*   Updated: 2022/01/12 03:02:57 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Default")
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& character) : _name(character._name)
{
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			_inventory[i] = character._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character::~Character(void)
{
	for(int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character& Character::operator=(const Character& character)
{
	_name = character.getName();
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			_inventory[i] = character._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_inventory[idx]->use(target); //Cure 또는 Ice의 use 호출
}