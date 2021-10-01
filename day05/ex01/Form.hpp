/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:29:38 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/01 14:06:58 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#define RED "\x1b[31m"
#define BLUE "\x1b[34m"

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:

	std::string const m_formName;
	int const m_signGrade;
	int const m_execGrade;
	bool m_signed;
public:
	Form();
	Form(std::string const &formName, int signGrade, int execGrade);
	Form(Form const &ref);
	Form &operator=(Form const &ref);
	~Form();

	std::string const & getFormName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	bool getSigned() const;
	void beSigned(Bureaucrat const &b_crat);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(){}
		virtual ~GradeTooHighException() throw(){}
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(){}
		virtual ~GradeTooLowException() throw(){}
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &src);

#endif
