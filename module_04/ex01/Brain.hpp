/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 02:02:42 by plee              #+#    #+#             */
/*   Updated: 2022/01/11 03:30:34 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string _ideas[100];

public:
	Brain(void);
	Brain(const Brain& brain);
	~Brain(void);

	Brain& operator=(const Brain& brain);
	void setIdeas(int idx, const std::string& idea);
	std::string getIdeas(int index) const;
};

#endif