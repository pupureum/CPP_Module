/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:07:41 by plee              #+#    #+#             */
/*   Updated: 2021/12/17 20:45:02 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARVTRAP_HPP
# define SCARVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scavtrap);
	~ScavTrap(void);

	ScavTrap& operator=(const ScavTrap& scavtrap);
	void guardGate();
};

#endif