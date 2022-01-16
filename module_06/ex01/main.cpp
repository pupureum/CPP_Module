/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 05:00:56 by plee              #+#    #+#             */
/*   Updated: 2022/01/17 05:04:09 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main()
{
	Data	*before = new Data("plee", 25);
	Data	*after;

	after = deserialize(serialize(before));

	std::cout << "before: \n" << before << std::endl;
	std::cout << serialize(before) << std::endl;
	std::cout << *before << std::endl;

	std::cout << "after: \n" << after << std::endl;
	std::cout << serialize(after) << std::endl;
	std::cout << *after << std::endl;

	delete before;

	return (0);
}