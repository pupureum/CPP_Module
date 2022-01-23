/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 02:09:35 by plee              #+#    #+#             */
/*   Updated: 2022/01/23 19:20:52 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFINE_HPP

# include <iostream>
# include <algorithm>

class NotFoundException : public std::exception 
{
public:
	const char* what() const throw() {return ("Not Found");}
};

template <typename T>
typename T::iterator easyfind(T const &container, int find)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw NotFoundException();
	return (iter);
}

#endif
