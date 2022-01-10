/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 02:13:30 by plee              #+#    #+#             */
/*   Updated: 2022/01/11 03:31:55 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain created" << std::endl;
	for (int i; i < 100; i++)
	{
		switch (i % 4)
		{
			case 0:
				_ideas[i] = "Eat";
				break;
			case 1:
				_ideas[i] = "Sleep";
				break;
			case 2:
				_ideas[i] = "Play";
				break;
			case 3:
				_ideas[i] = "Walk";
				break;
		}
		
	}
}

Brain::Brain(const Brain& brain)
{
	for(int i; i < 100; i++)
		setIdeas(i, brain.getIdeas(i));
	std::cout << "Brain copy constructed" << std::endl;
}

Brain::~Brain(void)
{
	if (_ideas)
		delete[] _ideas;
	std::cout << "Brain destroyed" << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	Brain *a = new Brain();
	for (int i = 0; i < 100; i++)
		a->_ideas[i] = brain._ideas[i];
	return (*a);
}

void Brain::setIdeas(int i, const std::string& idea)
{
	_ideas[i] = idea;
}

std::string Brain::getIdeas(int i) const
{
	return(_ideas[i]);
}