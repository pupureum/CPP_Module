/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:25:51 by plee              #+#    #+#             */
/*   Updated: 2022/01/15 01:52:20 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string _target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(const std::string&target);
	RobotomyRequestForm(const RobotomyRequestForm& robotomyrequestform);
	~RobotomyRequestForm(void);
	RobotomyRequestForm& operator=(const RobotomyRequestForm robotomyrequestform);

	void execute(Bureaucrat const & executor) const;
};

#endif