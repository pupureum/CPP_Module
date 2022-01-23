/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:25:10 by plee              #+#    #+#             */
/*   Updated: 2022/01/24 01:53:24 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

class Span
{
private:
	std::vector<int> _vec;

public:
	Span(void);
	Span(unsigned int N);
	Span(const Span& span);
	Span& operator=(const Span& span);
	~Span(void);

	const std::vector<int>& get_Vec(void) const;
	void addNumber(int num);	
	template <class InputIterator>
	void addNumber(InputIterator begin, InputIterator end)
	{
		if (std::distance(begin, end) + _vec.size() > _vec.capacity())
			throw NoSpaceException();
		_vec.insert(_vec.begin(), begin, end);
	}
	int shortestSpan(void);
	int longestSpan(void);

	class NoSpaceException : public std::exception
	{
		public:
			const char* what(void) const throw();
	};

	class NoSpanException : public std::exception
	{
		public:
			const char* what(void) const throw();
	};
};

#endif