/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:51:56 by plee              #+#    #+#             */
/*   Updated: 2022/01/19 00:44:22 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void) : _value(0.0) {}

Conversion::Conversion(const std::string& input) : _value(atof(input.c_str())) {}

Conversion::Conversion(const Conversion& conversion)
{
	*this = conversion;
}

Conversion::~Conversion(void) {}

Conversion& Conversion::operator=(const Conversion& conversion)
{
	_value = conversion._value;
	return (*this);
}

char Conversion::toChar(void) const
{

	if (std::isnan(_value) || std::isinf(_value) || _value < 0 || _value > 255)
		throw ImpossibleException();
	char c = static_cast<char>(_value);
	if (!std::isprint(_value))
		throw NonDisplaybleException();
	return (c);
}

int Conversion::toInt(void) const
{
	if (std::isinf(_value) || std::isnan(_value))
		throw ImpossibleException();
	if (_value > INT_MAX || _value < INT_MIN)
		throw ImpossibleException();
	return (static_cast<int>(_value));
}

float Conversion::toFloat(void) const
{	
	return (static_cast<float>(_value));
}

double Conversion::toDouble(void) const
{	
	return (_value);
}

void Conversion::show(void) const
{
	try 
	{
		char c = toChar();
		std::cout << "char: '" << c << std::endl; 
	}
	catch(std::exception& e)
	{
		std::cout << "char: " << e.what() << std::endl;
	}

	try
	{
		int i = toInt();
		std::cout << "int: " << i << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "int: " << e.what() << std::endl;
	}

	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	std::cout << "float: " << toFloat() << "f" << std::endl;
	std::cout << "double: " << toDouble() << std::endl;
}

const char* Conversion::NonDisplaybleException::what() const throw()
{
	return ("Non displayable");
}

const char* Conversion::ImpossibleException::what() const throw()
{
	return ("impossible");
}