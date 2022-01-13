/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:52:08 by plee              #+#    #+#             */
/*   Updated: 2022/01/14 02:34:03 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const unsigned int _gradeToSign;
	const unsigned int _gradeToExecute;

public:
	Form(void);
	Form(const std::string name, const unsigned int gradeToSign, const unsigned int gradeToExecute);
	Form(const Form& form);
	~Form(void);
	Form& operator=(const Form& form);

	std::string getName(void) const;
	bool getIsSigned(void) const;
	unsigned int getGradeToSign(void) const;
	unsigned int getGradeToExecute(void) const;
	bool beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception
	{
	private:
		const char* _message;
		
	public:
		GradeTooHighException(const char* message);
		~GradeTooHighException() throw();
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	private:
		const char* _message;

	public:
		GradeTooLowException(const char* message);
		~GradeTooLowException() throw();
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, Form& obj);

#endif