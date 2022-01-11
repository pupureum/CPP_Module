/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 23:58:08 by plee              #+#    #+#             */
/*   Updated: 2022/01/12 00:04:11 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria* _inventory[4];

public:
	Character(void);
	Character(std::string name);
	Character(const Character& character);
	~Character(void);

	Character& operator=(const Character& character);
	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif