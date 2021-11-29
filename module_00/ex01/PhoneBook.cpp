/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:46:16 by plee              #+#    #+#             */
/*   Updated: 2021/11/29 21:57:49 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	PhoneBook::PhoneBookPrint(const PhoneBook Phonebook) const
{
	
}

void	PhoneBook::PhoneBookSearch(const PhoneBook phonebook) const
{
	std::cout << "---------- ---------- ---------- ----------\n";
    std::cout << "   index  |first name| last name| nickname \n";
    std::cout << "---------- ---------- ---------- ----------\n";
	for(int i = 0; i < phonebook.contact_idx && i < 8; i++)
	{
		std::cout << std::setw(10);
		std::cout << contact[phonebook.contact_idx % 8].GetFirstName() << "|";
	}
}

void	PhoneBook::PhoneBookAdd(PhoneBook phonebook)
{
	std::string	str;

	std::cout << "firstname?";
	std::getline(std::cin, str);
	contact[phonebook.contact_idx % 8].SetFirstName(str);
	std::cout << "lastname?";
	std::getline(std::cin, str);
	contact[phonebook.contact_idx % 8].SetLastName(str);
	std::cout << "nickname?";
	std::getline(std::cin, str);
	contact[phonebook.contact_idx % 8].SetNickName(str);
	std::cout << "phone number?";
	std::getline(std::cin, str);
	contact[phonebook.contact_idx % 8].SetPhoneNumber(str);
	std::cout << "darkest secret?";
	std::getline(std::cin, str);
	contact[phonebook.contact_idx % 8].SetDarkestSecret(str);
}

int main()
{
	PhoneBook phonebook;

	while(1)
	{
		std::string input;
		std::cout << "Waiting for your input [ADD/SEARCH/EXIT]" << '\n';
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			phonebook.PhoneBookAdd(phonebook);
			phonebook.contact_idx++;
		}
		else if(!input.compare("SEARCH"))
			phonebook.PhoneBookSearch(phonebook);
		else if(!input.compare("EXIT"))
			break;
		else
			std::cout << "Invalid Command!" << std::endl;
	}
	return (0);
}