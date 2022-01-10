/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:58:22 by plee              #+#    #+#             */
/*   Updated: 2022/01/10 23:59:43 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
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

	void makeSound() const;
};

#endif