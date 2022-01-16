/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 05:49:10 by plee              #+#    #+#             */
/*   Updated: 2022/01/17 05:56:17 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base *ptr = generate();
	Base &ref = *ptr;

	std::cout << "ptr : ";
	identify(ptr);
	std::cout << "ref : ";
	identify(ref);

	delete ptr;
	return (0);

}