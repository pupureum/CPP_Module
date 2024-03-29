/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:27:42 by plee              #+#    #+#             */
/*   Updated: 2021/12/09 16:00:58 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void){}

Karen::~Karen(void){}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
			  << "I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl
			  << "You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}
void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl
			  << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	std::string levelArr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*f[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	int num;
	for(num = 0; num < 4; num++)
	{
		if (levelArr[num] == level)
			break;
	}
	switch (num)
	{
		break;
	case 0:
		(this->*(f[0]))();
	case 1:
		(this->*(f[1]))();
	case 2:
		(this->*(f[2]))();
	case 3:
		(this->*(f[3]))();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}