/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:51:45 by plee              #+#    #+#             */
/*   Updated: 2022/01/15 05:41:41 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern	someRandomIntern;
		Form*	rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "plee");
		delete rrf;
			
		rrf = someRandomIntern.makeForm("error", "kkk");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}