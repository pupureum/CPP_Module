/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:27:34 by plee              #+#    #+#             */
/*   Updated: 2022/01/11 18:15:11 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string _type;

public:
	Animal(void);
	Animal(const std::string type);
	Animal(const Animal& animal);
	virtual ~Animal(void);

	Animal& operator=(const Animal& animal);

	std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif