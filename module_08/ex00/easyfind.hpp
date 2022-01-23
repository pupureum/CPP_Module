/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 02:09:35 by plee              #+#    #+#             */
/*   Updated: 2022/01/23 22:23:43 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>

class NotFoundException : public std::exception 
{
public:
	const char* what() const throw() {return ("Not Found!");}
};

template <typename T>
typename T::const_iterator easyfind(T const &container, int value)
{
	typename T::const_iterator iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw NotFoundException();
	return (iter);
}

#endif