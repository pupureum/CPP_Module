/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:51:45 by plee              #+#    #+#             */
/*   Updated: 2022/01/14 01:48:12 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int   main()
{
	Bureaucrat a("a", 0);
	Bureaucrat b("b", 151);
	std::cout << std::endl;

	Bureaucrat plee("plee", 149);
	plee.downGrade();
	plee.downGrade();
	plee.downGrade();

	std::cout << plee << std::endl;
	std::cout << std::endl;

	Bureaucrat lee("lee", 2);
	lee.upGrade();
	lee.upGrade();
	lee.upGrade();

	std::cout << lee << std::endl;

	return (0);
}