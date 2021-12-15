/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:39:22 by plee              #+#    #+#             */
/*   Updated: 2021/12/16 00:35:49 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_Bits = 8;

Fixed::Fixed(void) : _fixedPoint(0){}
Fixed::Fixed(const int raw) : _fixedPoint(raw * (1 << Fixed::_fractional_Bits)){}
Fixed::Fixed(float raw) : _fixedPoint(roundf(raw * (1 << Fixed::_fractional_Bits))){}
Fixed::~Fixed(void){}
Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

bool Fixed::operator>(const Fixed& fixed)
{
	return(_fixedPoint > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed)
{
	return(_fixedPoint < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed)
{
	return(_fixedPoint >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed)
{
	return(_fixedPoint <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed& fixed)
{
	return(_fixedPoint == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed& fixed)
{
	return(_fixedPoint != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed temp(this->toFloat() + fixed.toFloat());
	return(temp);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed temp(this->toFloat() - fixed.toFloat());
	return(temp);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed temp(this->toFloat() * fixed.toFloat());
	return(temp);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed temp(this->toFloat() / fixed.toFloat());
	return(temp);
}

Fixed& Fixed::operator++()
{
	_fixedPoint++;
	return(*this);
}

Fixed& Fixed::operator--()
{
	_fixedPoint--;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_fixedPoint++;
	return(temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_fixedPoint--;
	return(temp);	
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	return(fixed1.getRawBits() > fixed2.getRawBits() ? fixed1 : fixed2);
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	return(fixed1.getRawBits() < fixed2.getRawBits() ? fixed1 : fixed2);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	return(fixed1.getRawBits() > fixed2.getRawBits() ? fixed1 : fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	return(fixed1.getRawBits() < fixed2.getRawBits() ? fixed1 : fixed2);
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
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