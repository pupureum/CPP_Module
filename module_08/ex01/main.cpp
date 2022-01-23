/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 01:30:30 by plee              #+#    #+#             */
/*   Updated: 2022/01/24 02:06:59 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void  test_subject(void)
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void  test_range(void)
{
	std::vector<int>  numbers;
	for (int i = 0; i < 20000; i++)
		numbers.push_back(i + 1);
	
	Span  sp = Span(20000);
	sp.addNumber(numbers.begin(), numbers.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void  test_exception(void)
{
	Span sp(4);
	sp.addNumber(1);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	test_subject();
	test_range();
	test_exception();

	return (0);
}