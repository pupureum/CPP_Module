/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:11:10 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 15:41:56 by plee             ###   ########.fr       */
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
		float getX() const;
		float getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
float get_sign(Point const P1, Point const P2, Point const P3);

#endif