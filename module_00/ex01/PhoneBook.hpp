/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:53:39 by plee              #+#    #+#             */
/*   Updated: 2021/11/29 21:55:02 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
			Contact contact[8];

	public:
			PhoneBook(void);
			~PhoneBook(void);
			int		contact_idx;
			void	PhoneBookAdd(PhoneBook phonebook);
			void	PhoneBookSearch(const PhoneBook phonebook) const;
			void	PhoneBook::PhoneBookPrint(const PhoneBook Phonebook) const;
			PhoneBook::PhoneBook()
			{
				contact_idx = 0;
			}
			PhoneBook::~PhoneBook()
			{
			}
};

#endif