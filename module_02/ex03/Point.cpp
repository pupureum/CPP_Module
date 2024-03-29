/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:14:29 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 15:49:44 by plee             ###   ########.fr       */
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

float Point::getX() const
{
	return (_x.toFloat());
}

float Point::getY() const
{
	return (_y.toFloat());
}

Point&	Point::operator=(const Point& point)
{
	return (*this);
}