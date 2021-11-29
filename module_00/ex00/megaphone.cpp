/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:53:10 by plee              #+#    #+#             */
/*   Updated: 2021/11/29 17:17:22 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int j;

	j  = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * ";
	else
	{
		for(int i = 1; i < argc; i++)
		{
			for(int j = 0; argv[i][j]; j++)
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
		}
	}
	std::cout << std::endl;

}