/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:04:25 by plee              #+#    #+#             */
/*   Updated: 2021/12/01 17:08:49 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	Contact::GetFirstName() const
{
	return(first_name);
}

std::string	Contact::GetLastName() const
{
	return(last_name);
}

std::string	Contact::GetNickname() const
{
	return(nickname);
}

std::string	Contact::GetPhoneNumber() const
{
	return(phone_number);
}

std::string	Contact::GetDarkestSecret() const
{
	return(darkest_secret);
}

void	Contact::SetFirstName(std::string input)
{
	first_name = input;
}

void	Contact::SetLastName(std::string input)
{
	last_name = input;
}

void	Contact::SetNickname(std::string input)
{
	nickname = input;
}

void	Contact::SetPhoneNumber(std::string input)
{
	phone_number = input;
}

void	Contact::SetDarkestSecret(std::string input)
{
	darkest_secret = input;
}