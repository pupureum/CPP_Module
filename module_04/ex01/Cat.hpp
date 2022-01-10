/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:58:22 by plee              #+#    #+#             */
/*   Updated: 2022/01/11 03:33:55 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _brain;

public:
	Cat(void);
	Cat(const Cat& cat);
	~Cat(void);
	
	Cat& operator=(const Cat& cat);

	void makeSound() const;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat& wrong_cat);
	~WrongCat(void);

	WrongCat& operator=(const WrongCat& wrong_cat);

	Brain* getBrain(void) const;

	void makeSound() const;
};

#endif