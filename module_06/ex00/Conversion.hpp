/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:45:21 by plee              #+#    #+#             */
/*   Updated: 2022/01/17 03:42:58 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cmath>

class Conversion
{
private:
	double _value;

public:
	Conversion(void);
	Conversion(const std::string& input);
	Conversion(const Conversion& conversion);
	~Conversion(void);
	Conversion& operator=(const Conversion& conversion);

	char toChar(void) const;
	int toInt(void) const;
	float toFloat(void) const;
	double toDouble(void) const;

	void show(void) const;

	class NonDisplaybleException: public std::exception
	{
		const char* what() const throw();
	};

	class ImpossibleException: public std::exception
	{
		const char* what() const throw();
	};
};

#endif