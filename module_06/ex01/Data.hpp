/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 03:45:31 by plee              #+#    #+#             */
/*   Updated: 2022/01/17 04:46:39 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
private:
	std::string _name;
	int _age;

public:
	Data(void);
	Data(std::string name, int age);
	Data(const Data& data);
	~Data(void);
	Data& operator=(const Data& data);
	
	std::string getName(void) const;
	int getAge(void) const;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

std::ostream& operator<<(std::ostream& os, const Data& data);

#endif