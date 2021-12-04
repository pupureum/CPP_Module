/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:45:26 by plee              #+#    #+#             */
/*   Updated: 2021/12/05 03:42:17 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fixedPoint;
		static const int _bits;

	public:
		Fixed(void);
		Fixed(int raw);
		Fixed(float raw);
		Fixed(const Fixed& fixed);
		~Fixed(void);
		Fixed& operator=(const Fixed& fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		void setRawBits(float const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif