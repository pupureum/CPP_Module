/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:59:04 by plee              #+#    #+#             */
/*   Updated: 2021/12/02 19:29:13 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include<iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie(void);
};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

#endif