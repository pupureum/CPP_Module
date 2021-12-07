/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:39:22 by plee              #+#    #+#             */
/*   Updated: 2021/12/06 21:13:53 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw) : _fixedPoint(raw << Fixed::_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float raw) : _fixedPoint(roundf(raw * (1 << Fixed::_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPoint = fixed.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream &os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

float Fixed::toFloat(void) const
{
	return (float)(this->_fixedPoint) / (1 << Fixed::_bits);
}

int Fixed::toInt(void) const
{
	return (this->_fixedPoint >> Fixed::_bits);
}

int Fixed::getRawBits( void ) const
{
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw << Fixed::_bits;
}

void Fixed::setRawBits(float const raw)
{
	this->_fixedPoint = roundf(raw *(1 << Fixed::_bits));
}