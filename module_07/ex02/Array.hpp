/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 01:48:56 by plee              #+#    #+#             */
/*   Updated: 2022/01/23 00:36:52 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
private:
	T* _data;
	unsigned int _size;

public:
	Array(void) : _data(NULL), _size(0) {};

	Array(unsigned int n) : _data(NULL), _size(n)
	{
		if (_size > 0)
			_data = new T[_size];
	};

	Array(const Array& array) : _data(NULL), _size(array.size())
	{
		if (_size > 0)
			_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = array._data[i];
	};

	Array& operator=(const Array& arr)
	{
		if (_size > 0)
		{
			delete[] _data;
			_data = NULL;
			_size = 0;
		}
		_size = arr.size();
		if (_size > 0)
			_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = arr._data[i];
		return (*this);
	};

	~Array(void)
	{
		if (_size > 0)
		{
			delete[] _data;
			_data = NULL;
			_size = 0;
		}
	};

	unsigned int size(void) const
	{
		return (_size);
	};

	T& operator[](unsigned int idx)
	{
		if (idx >= _size || idx < 0)
		{
			throw RangeException();
		}
		return (_data[idx]);
	};

	const T& operator[](unsigned int idx) const
	{
		if (idx >= _size || idx < 0)
		{
			throw RangeException();
		}
		return (_data[idx]);
	}

	class RangeException : public std::exception
	{
		public:
			const char* what(void) const throw()
			{
				return ("Error : Index is out of array!");
			}
	};
};

template <typename T>
void print(Array<T> array, unsigned int size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
};

#endif