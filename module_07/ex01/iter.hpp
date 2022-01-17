/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 00:23:32 by plee              #+#    #+#             */
/*   Updated: 2022/01/18 01:45:47 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T* array, int len, void (*func)(T& element))
{
	for (int i = 0; i < len; i++)
	{
		(*func)(array[i]);
	}
}

template <typename T>
void print(T& element)
{
	std::cout << element << std::endl;
}

#endif