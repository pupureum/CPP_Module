/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 20:12:44 by plee              #+#    #+#             */
/*   Updated: 2022/01/09 02:25:12 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& fragtrap);
	~FragTrap(void);

	FragTrap& operator=(const FragTrap& fragtrap);
	void highFivesGuys(void);
};

#endif