/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 02:13:30 by plee              #+#    #+#             */
/*   Updated: 2022/01/11 18:09:37 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain created" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructed" << std::endl;
	for(int i = 0; i < 100; i++)
		setIdeas(i, brain.getIdeas(i));
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
	return (*this);
}

void Brain::setIdeas(int i, const std::string idea)
{
	_ideas[i] = idea;
}

std::string Brain::getIdeas(int i) const
{
	return(_ideas[i]);
}