/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:51:45 by plee              #+#    #+#             */
/*   Updated: 2022/01/14 22:59:32 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int   main()
{
	Form wrongForm = Form("wrong", 0, 0);

	Form a = Form("a", 1, 5);
	Form b = Form("b", 100, 70);

	Bureaucrat plee = Bureaucrat("plee", 2);

	std::cout << std::endl;
	plee.signForm(a);
	std::cout << a << std::endl;

	std::cout << std::endl;
	plee.upGrade();
	plee.signForm(a);
	std::cout << a << std::endl;

	return (0);
}