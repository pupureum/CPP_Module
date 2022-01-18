/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 01:15:07 by plee              #+#    #+#             */
/*   Updated: 2022/01/19 00:51:28 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int i[5] = {1, 2, 3, 4, 5};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string str[5] = {"Hello", "Nice", "to", "meet", "you"};
	
	std::cout << "<int>" << std::endl;
	iter(i, 5, print);
	std::cout << std::endl;

	std::cout << "<char>" << std::endl;
	iter(c, 5, print);
	std::cout << std::endl;

	std::cout << "<string>" << std::endl;
	iter(str, 5, print);
	std::cout << std::endl;
	
	return (0);
}