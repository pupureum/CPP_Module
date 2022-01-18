/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 02:11:18 by plee              #+#    #+#             */
/*   Updated: 2022/01/19 02:26:17 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	std::cout << "<Int>" << std::endl;
	Array<int> int_arr(5);
	for (int i = 0; i < 5; i++)
	{
		int_arr[i] = i;
	}
	print<int>(int_arr, 5);
	std::cout << std::endl;
	
	try
	{
		int_arr[7] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------------------" << std::endl;

	std::cout << "<Char>" << std::endl;
	Array<char> char_arr(5);
	for (int i = 0; i < 5; i++)
	{
		char_arr[i] = static_cast<char>(i + '0');
	}
	print<char>(char_arr, 5);
	std::cout << std::endl;	
	std::cout << "--------------------------------" << std::endl;

	std::cout << "<Stringr>" << std::endl;
	Array<std::string> string_arr(3);
	for (int i = 0; i < 3; i++)
	{
		string_arr[i] = "plee";
	}
	print<std::string>(string_arr, 3);
	std::cout << std::endl;

	try
	{
		string_arr[-1] = "error";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << std::endl;

	Array<std::string> string_copy(string_arr);
	print<std::string>(string_arr, 3);
	std::cout << std::endl;

	return (0);
}