/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 03:06:54 by plee              #+#    #+#             */
/*   Updated: 2022/01/24 03:16:54 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

void test_subject(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(95);
	mstack.push(26);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
}

void test_const_iterator(void)
{
	MutantStack<char> mstack;

	for (int i = 0; i < 5; i++)
		mstack.push('a' + i);
	
	MutantStack<char>::const_iterator cit = mstack.cbegin();
	MutantStack<char>::const_iterator cite = mstack.cend();

	while (cit != cite) {
		std::cout << *cit << " ";
		++cit;
	}

	std::cout << std::endl;
}

void test_reverse_iterator(void)
{
	MutantStack<double> mstack;
	mstack.push(1.0);
	mstack.push(2.0);
	mstack.push(3.0);
	mstack.push(4.0);
	mstack.push(5.0);
	MutantStack<double>::reverse_iterator rit = mstack.rbegin();
	MutantStack<double>::reverse_iterator rite = mstack.rend();
	
	while (rit != rite)
	{
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << std::endl;
}

void test_const_reverse_iterator(void)
{
	MutantStack<std::string> mstack;
	mstack.push("cpp");
	mstack.push("08");
	mstack.push(":)");
	MutantStack<std::string>::const_reverse_iterator crit = mstack.crbegin();
	MutantStack<std::string>::const_reverse_iterator crite = mstack.crend();
	
	while (crit != crite) {
		std::cout << *crit << " ";
		++crit;
	}
	std::cout << std::endl;
}

int main(void)
{
	test_subject();
	test_const_iterator();
	test_reverse_iterator();
	test_const_reverse_iterator();

	return (0);
}