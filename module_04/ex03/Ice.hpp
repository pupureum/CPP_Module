/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 03:26:52 by plee              #+#    #+#             */
/*   Updated: 2022/01/12 03:31:45 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(std::string const & type);
	Ice(const Ice& ice);
	~Ice(void);

	Ice& operator=(const Ice& ice);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif