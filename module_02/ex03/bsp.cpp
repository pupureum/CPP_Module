/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:42:27 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 15:48:38 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float get_sign(Point const P1, Point const P2, Point const P3)
{
	return (P1.getX() - P3.getX()) * (P2.getY() - P3.getY()) - (P2.getX() - P3.getX()) * (P1.getY() - P3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = get_sign(point, a, b);
	d2 = get_sign(point, b, c);
	d3 = get_sign(point, c, a);
	has_neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
	has_pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);
	return (!(has_neg && has_pos));
}