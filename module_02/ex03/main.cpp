/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:00:52 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 15:26:50 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(20, 0);
	Point	c(10, 30);
	Point	in(10, 15);
	Point	out(30, 50);

	if (bsp(a, b, c, in))
			std::cout << "point is in a triangle" << std::endl;
	else
		std::cout << "point is not in a triangle" << std::endl;
	if (bsp(a, b, c, out))
			std::cout << "point is in a triangle" << std::endl;
	else
		std::cout << "point is not in a triangle" << std::endl;
	return 0;
}