/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:26:46 by plee              #+#    #+#             */
/*   Updated: 2021/12/02 15:26:55 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
			std::string first_name;
			std::string last_name;
			std::string nickname;
			std::string phone_number;
			std::string darkest_secret;
	public:
			Contact(){};
			~Contact(){};
			std::string GetFirstName() const;
			std::string GetLastName() const;
			std::string GetNickname() const;
			std::string GetPhoneNumber() const;
			std::string GetDarkestSecret() const;

			void	SetFirstName(std::string input);
			void	SetLastName(std::string input);
			void	SetNickname(std::string input);
			void	SetPhoneNumber(std::string input);
			void	SetDarkestSecret(std::string input);
};

#endif