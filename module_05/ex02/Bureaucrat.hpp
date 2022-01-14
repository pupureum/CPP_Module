/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:01:50 by plee              #+#    #+#             */
/*   Updated: 2022/01/15 00:05:30 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Form;

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
	void signForm(Form& form);
	void executeForm(Form const & form);

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




// class Bureaucrat
// {
// private:
// 	const std::string	_name;
// 	int					_grade;

// public:
// 	// constructor & destructor declaration
// 	Bureaucrat();
// 	Bureaucrat(const std::string& name, int _grade);
// 	Bureaucrat(const Bureaucrat& bureaucrat);
// 	~Bureaucrat();

// 	// operator overload declaration
// 	Bureaucrat& operator=(const Bureaucrat& bureaucrat);

// 	// getter & setter declaration
// 	std::string	getName() const;
// 	int			getGrade() const;

// 	// other methods declaration
// 	void		increaseGrade();
// 	void		decreaseGrade();
// 	void		signForm(Form& form);

// 	// inner class declaration
// 	class GradeTooHighException : public std::exception
// 	{
// 	public:
// 		const char* what() const throw();
// 	};
// 	class GradeTooLowException : public std::exception
// 	{
// 	public:
// 		const char* what() const throw();
// 	};
// };
// // other overload declaration
// std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif