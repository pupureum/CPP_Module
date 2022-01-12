/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:31:23 by plee              #+#    #+#             */
/*   Updated: 2022/01/13 05:39:00 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& materia_source)
{
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			_inventory[i] = materia_source._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materia_source)
{
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (materia_source._inventory[i])
			_inventory[i] = materia_source._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (NULL);
}