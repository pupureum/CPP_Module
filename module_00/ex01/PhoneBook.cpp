/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:46:16 by plee              #+#    #+#             */
/*   Updated: 2021/12/01 17:15:04 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::GetInformation(const int idx) const
{
	std::cout << std::endl;
	std::cout << "first name: " << contact[idx].GetFirstName() << std::endl;
	std::cout << "last name: " << contact[idx].GetLastName() << std::endl;
	std::cout << "nickname: " << contact[idx].GetNickname() << std::endl;
	std::cout << "phone number: " << contact[idx].GetPhoneNumber() << std::endl;
	std::cout << "darkest secret: " << contact[idx].GetDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::PhoneBookPrint(const std::string str) const
{
	if (str.length() <= 10)
		std::cout << std::setw(10) << str << "|";
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".|";
	}
}

void	PhoneBook::PhoneBookSearch(void) const
{
	int	index;
	int	num;

	std::cout << "~~~~~~~~~~ ---------- ---------- ~~~~~~~~~~\n";
    std::cout << "   index  |first name| last name| nickname \n";
    std::cout << "~~~~~~~~~~ ---------- ---------- ~~~~~~~~~~\n";
	num = 0;
	for(int i = 0; i < contact_idx && i < 8; i++)
	{
		std::cout << std::setw(10);
		std::cout << std::setw(10) << i + 1 << "|";
		PhoneBookPrint(contact[i].GetFirstName());
		PhoneBookPrint(contact[i].GetLastName());
		PhoneBookPrint(contact[i].GetNickname());
		std::cout << "\n";
		num++;
	}
	std::cout << "Enter the index for which you want to know informations\n";
	std::cin >> index;
	if (std::cin.fail() || index <= 0 || index > num)
	{
		std::cout << "Wrong Input" << std::endl;
		std::cin.clear();
		std::cin.ignore(MAX_INPUT, '\n');
	}
	else
	{
		std::cin.ignore(MAX_INPUT, '\n');
		GetInformation(index - 1);
	}
}

void	PhoneBook::PhoneBookAdd(void)
{
	std::string	str;

	std::cout << "firstname?";
	std::getline(std::cin, str);
	contact[contact_idx % 8].SetFirstName(str);
	std::cout << "lastname?";
	std::getline(std::cin, str);
	contact[contact_idx % 8].SetLastName(str);
	std::cout << "nickname?";
	std::getline(std::cin, str);
	contact[contact_idx % 8].SetNickname(str);
	std::cout << "phone number?";
	std::getline(std::cin, str);
	contact[contact_idx % 8].SetPhoneNumber(str);
	std::cout << "darkest secret?";
	std::getline(std::cin, str);
	contact[contact_idx % 8].SetDarkestSecret(str);
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
			phonebook.PhoneBookAdd();
			phonebook.contact_idx++;
		}
		else if(!input.compare("SEARCH"))
			phonebook.PhoneBookSearch();
		else if(!input.compare("EXIT"))
			break;
		else
			std::cout << "Invalid Command!" << std::endl;
	}
	return (0);
}