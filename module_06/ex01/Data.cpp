/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 03:48:52 by plee              #+#    #+#             */
/*   Updated: 2022/01/17 05:00:36 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) {}

Data::Data(std::string name, int age) : _name(name), _age(age) {}

Data::Data(const Data& data) : _name(data._name), _age(data._age) {}

Data::~Data(void) {}

Data& Data::operator=(const Data& data)
{
	_name = data.getName();
	_age = data.getAge();
	return (*this);
}

std::string Data::getName(void) const
{
	return (_name);
}

int Data::getAge(void) const
{
	return (_age);
}

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

std::ostream& operator<<(std::ostream& os, const Data& data)
{
	os << "name : " << data.getName() << "\n"
	<< "age : " << data.getAge() << "\n";
	return (os);
}