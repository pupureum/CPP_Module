/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:58:22 by plee              #+#    #+#             */
/*   Updated: 2022/01/11 17:02:21 by plee             ###   ########.fr       */
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

	Brain* getBrain(void) const;
};

#endif