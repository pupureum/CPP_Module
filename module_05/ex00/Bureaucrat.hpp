/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:01:50 by plee              #+#    #+#             */
/*   Updated: 2022/01/14 01:37:46 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
private:
	const std::string _name;
	unsigned int _grade;

public:
	Bureaucrat(void);
	Bureaucrat(const std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	~Bureaucrat(void);

	Bureaucrat& operator=(const Bureaucrat& bureaucrat);

	std::string getName(void) const;
	unsigned int getGrade(void) const;
	void upGrade(void);
	void downGrade(void);

	class GradeTooHighException : public std:: exception
	{
		private:
			const char*   _message;

		public:
			GradeTooHighException(const char* message);
			~GradeTooHighException() throw();
			const char* what() const throw();
	};

	class GradeTooLowException : public std:: exception
	{
		private:
			const char*   _message;

		public:
			GradeTooLowException(const char* message);
			~GradeTooLowException() throw();
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& breaucrat);

#endif