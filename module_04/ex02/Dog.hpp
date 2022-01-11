/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:10:49 by plee              #+#    #+#             */
/*   Updated: 2022/01/11 17:04:46 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* _brain;

public:
	Dog(void);
	Dog(const Dog& Dog);
	~Dog(void);
	
	Dog& operator=(const Dog& Dog);
	void makeSound() const;

	Brain* getBrain(void) const;
};

#endif