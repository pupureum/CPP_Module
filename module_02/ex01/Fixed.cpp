/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:39:22 by plee              #+#    #+#             */
/*   Updated: 2021/12/15 19:39:43 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_Bits = 8;

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw) : _fixedPoint(raw * (1 << Fixed::_fractional_Bits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float raw) : _fixedPoint(roundf(raw * (1 << Fixed::_fractional_Bits)))
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
	return (static_cast<float>(this->_fixedPoint) / (1 << Fixed::_fractional_Bits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPoint >> Fixed::_fractional_Bits);
}

int Fixed::getRawBits( void ) const
{
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw << Fixed::_fractional_Bits;
}