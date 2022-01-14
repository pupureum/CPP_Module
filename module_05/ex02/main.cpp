/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:51:45 by plee              #+#    #+#             */
/*   Updated: 2022/01/15 05:25:06 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
		Bureaucrat	plee("plee", 3); //모두 가능
	
		ShrubberyCreationForm a("home");
		RobotomyRequestForm b("robot");
		PresidentialPardonForm c("juno");

		plee.signForm(a);
		plee.signForm(b);
		plee.signForm(c);
		plee.executeForm(a);
		plee.executeForm(b);
		plee.executeForm(c);

	std::cout << "----------------------------------------------------\n";

		Bureaucrat	lee("lee", 65); //f와 e실행 빼고 가능
		ShrubberyCreationForm d("home2");
		RobotomyRequestForm e("robot2");
		PresidentialPardonForm f("juno2");
		lee.signForm(d);
		lee.signForm(e);
		lee.signForm(f);
		lee.executeForm(d);
		lee.executeForm(e);
		lee.executeForm(f);

	std::cout << "----------------------------------------------------\n";

		Bureaucrat	kim("kim", 138); //g사인만 가능
		ShrubberyCreationForm g("home3");
		RobotomyRequestForm h("robot3");
		PresidentialPardonForm i("juno3");
		kim.signForm(g);
		kim.signForm(h);
		kim.signForm(i);
		kim.executeForm(g);
		kim.executeForm(h);
		kim.executeForm(i);

	std::cout << "----------------------------------------------------\n";
	return (0);
}