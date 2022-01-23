/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:19:51 by plee              #+#    #+#             */
/*   Updated: 2022/01/24 02:06:45 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) { _vec.reserve(0); };

Span::Span(unsigned int N) { _vec.reserve(N); };

Span::Span(const Span& span) { *this = span; };

Span& Span::operator=(const Span& span)
{
	_vec = span._vec;
	return (*this);
}

Span::~Span(void) { _vec.clear(); }

const std::vector<int>& Span::get_Vec(void) const { return (_vec); }

void Span::addNumber(int num)
{
	if (_vec.size() == _vec.capacity())
		throw NoSpaceException();
	_vec.push_back(num);
}

int Span::shortestSpan(void)
{
	if (_vec.size() < 2)
		throw NoSpanException();
	
	std::vector<int> temp;
	for (unsigned long i = 0; i < _vec.size(); i++)
		temp.push_back(_vec.at(i));
	std::sort(temp.begin(), temp.end());
	
	int shortest_span = this->longestSpan();
	std::vector<int>::iterator iter;
	for (iter = temp.begin(); iter + 1 < temp.end(); iter++)
	{
		if (shortest_span > *(iter + 1) - *iter)
			shortest_span = *(iter + 1) - *iter;
	}
	return (shortest_span);
}

int Span::longestSpan(void)
{
	if (_vec.size() < 2)
		throw NoSpanException();

	int max = *std::max_element(_vec.begin(), _vec.end());
	int min = *std::min_element(_vec.begin(), _vec.end());
	return (max - min);
}

const char* Span::NoSpaceException::what(void) const throw()
{
	return ("Not enough space!");
}
const char* Span::NoSpanException::what(void) const throw()
{
	return ("Not enough elements!");
}