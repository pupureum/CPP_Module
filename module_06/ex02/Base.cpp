/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 05:09:24 by plee              #+#    #+#             */
/*   Updated: 2022/01/17 05:58:39 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void) {}

Base* generate(void)
{
	int idx;
	
	std::srand(std::time(NULL));
	idx = rand() % 3;

	switch (idx)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base base;

	try
	{
		base = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (const std::exception& e) {}

	try
	{
		base = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch (const std::exception& e) {}
	
	try
	{
		base = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception& e) {}
}