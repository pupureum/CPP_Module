/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 03:08:34 by plee              #+#    #+#             */
/*   Updated: 2022/01/13 05:32:05 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _inventory[4];

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource& materia_source);
	~MateriaSource(void);

	MateriaSource& operator=(const MateriaSource& materia_source);
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif