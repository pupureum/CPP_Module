/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 01:48:56 by plee              #+#    #+#             */
/*   Updated: 2022/01/18 03:43:00 by plee             ###   ########.fr       */
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
	Array(void);
	Array(unsigned int n);
	Array(const Array& array);
	Array& operator=(const Array& arr);
	~Array(void);

	unsigned int size(void) const;
	T& operator[](unsigned int idx);
	class RangeException : public std::exception
	{
		public:
			const char* what(void) const throw();
	};
};

template <typename T>
Array<T>::Array(void) : _data(NULL), _size(0) {};

template <typename T>
Array<T>::Array(unsigned int n) : _data(NULL), _size(n)
{
	if (_size > 0)
		_data = new T[_size];
};

template <typename T>
Array<T>::Array(const Array& array) : _data(NULL), _size(array.size())
{
	if (_size > 0)
		_data = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = array._data[i];
};

template <typename T>
Array<T>& Array<T>::operator=(const Array& arr)
{
	if (_size > 0)
		delete[] _data;
	_size = arr.size();
	if (_size > 0)
		_data = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = arr._data[i];
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (_size);
};

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size || index < 0)
	{
		throw RangeException();
	}
	return (_data[index]);
};

template <typename T>
const char* Array<T>::RangeException::what(void) const throw()
{
	return ("Error : Index is out of array!");
}

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