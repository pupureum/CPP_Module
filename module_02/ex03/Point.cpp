/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:14:29 by plee              #+#    #+#             */
/*   Updated: 2021/12/16 01:35:58 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){}
Point::~Point(void){}
Point::Point(const float x, const float y) : _x(x), _y(y){}

Point::Point(const Point& point)
{
	*this = point;
}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}

Point Point::operator-(const Point& point) const
{
	Point	temp((_x - point.getX()).toFloat(), (_y - point.getY()).toFloat());
}

// Point	Point::operator-(const Point& point) const
// {
// 	return Point(this->_x - point.getX().toFloat(), this->_y - point.getY().toFloat());
// }

Point&	Point::operator=(const Point& point)
{
	_x = point.getX();
	_y = point.getY();
	return (*this);
}