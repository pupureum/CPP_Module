/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:45:26 by plee              #+#    #+#             */
/*   Updated: 2021/12/09 20:41:01 by plee             ###   ########.fr       */
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

		bool operator>(const Fixed& fixed);
		bool operator<(const Fixed& fixed);
		bool operator>=(const Fixed& fixed);
		bool operator<=(const Fixed& fixed);
		bool operator==(const Fixed& fixed);
		bool operator!=(const Fixed& fixed);
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed& operator=(const Fixed& fixed);
		Fixed operator+(const Fixed& fixed);
		Fixed operator-(const Fixed& fixed);
		Fixed operator*(const Fixed& fixed);
		Fixed operator/(const Fixed& fixed);
	
		static Fixed& max(Fixed& fixed1, Fixed& fixed2);
		static Fixed& min(Fixed& fixed1, Fixed& fixed2);
		static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
		static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		void setRawBits(float const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif