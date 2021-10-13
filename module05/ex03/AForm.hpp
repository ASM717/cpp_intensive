/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:29:38 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 18:21:50 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#define RED "\x1b[31m"
#define BLUE "\x1b[34m"

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
private:

	std::string const m_formName;
	int const m_signGrade;
	int const m_execGrade;
	bool m_signed;
public:
	AForm();
	AForm(std::string const &formName);
	AForm(std::string const &formName, int signGrade, int execGrade);
	AForm(AForm const &ref);
	AForm &operator=(AForm const &ref);
	virtual ~AForm();

	std::string const & getFormName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	bool getSigned() const;
	void beSigned(Bureaucrat const &b_crat);
	virtual void execute(Bureaucrat const &executor) const = 0;

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

	class FormNotSignedException: public std::exception
	{
	public:
		FormNotSignedException() {}
		virtual ~FormNotSignedException() throw() {}
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, AForm const &src);

#endif
