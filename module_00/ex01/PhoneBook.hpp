/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:53:39 by plee              #+#    #+#             */
/*   Updated: 2021/12/02 15:26:52 by plee             ###   ########.fr       */
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
			PhoneBook(){contact_idx = 0;}
			~PhoneBook(){};
			int		contact_idx;
			void	PhoneBookAdd(void);
			void	PhoneBookSearch(void) const;
			void	PhoneBookPrint(const std::string str) const;
			void	GetInformation(const int idx) const;
};

#endif