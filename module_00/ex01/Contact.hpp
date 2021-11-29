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
			Contact(/* args */);
			~Contact();
			std::string GetFirstName();
			std::string GetLastName();
			std::string GetNickName();
			std::string GetPhoneNumber();
			std::string GetDarkestSecret();

			void	SetFirstName(std::string input);
			void	SetLastName(std::string input);
			void	SetNickName(std::string input);
			void	SetPhoneNumber(std::string input);
			void	SetDarkestSecret(std::string input);
};

#endif