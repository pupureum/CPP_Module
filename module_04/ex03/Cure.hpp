/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 03:19:00 by plee              #+#    #+#             */
/*   Updated: 2022/01/12 03:22:10 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(std::string const & type);
	Cure(const Cure& cure);
	~Cure(void);

	Cure& operator=(const Cure& cure);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif