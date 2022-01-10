/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:10:49 by plee              #+#    #+#             */
/*   Updated: 2022/01/10 23:59:38 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog& Dog);
	~Dog(void);
	
	Dog& operator=(const Dog& Dog);

	void makeSound() const;
};

class WrongDog : public WrongAnimal
{
public:
	WrongDog(void);
	WrongDog(const WrongDog& wrong_dog);
	~WrongDog(void);
	
	WrongDog& operator=(const WrongDog& wrong_dog);

	void makeSound() const;
};

#endif