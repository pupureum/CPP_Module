/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:11:10 by plee              #+#    #+#             */
/*   Updated: 2021/12/16 01:34:41 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point& point);
		~Point(void);

		Point& operator=(const Point& point);
		Point operator-(const Point& point) const;
		Fixed getX(void) const;
		Fixed getY(void) const;
		
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif