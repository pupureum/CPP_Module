/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 03:44:18 by plee              #+#    #+#             */
/*   Updated: 2022/01/17 03:44:19 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int ac, char **av)
{
	Conversion	conversion;

	if (ac != 2)
	{
		std::cerr << "wrong number of arguments" << std::endl;
		return (1);
	}

	try
	{
		conversion = Conversion(av[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}

	conversion.show();

	return (0);
}