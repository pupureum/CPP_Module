/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:26:27 by plee              #+#    #+#             */
/*   Updated: 2021/12/04 21:55:28 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen;

	if (argc == 2)
	{
		karen.complain(argv[1]);
		return (0);	
	}
	else
	{
		std::cout << "Wrong Argument!" << std::endl;
		return (-1);
	}
}