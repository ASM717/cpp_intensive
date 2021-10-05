/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:20:19 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 14:55:47 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define PURPLE "\x1b[35m"
#define SKY "\x1b[36m"
#define YEL "\x1B[33m"

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	std::string m_name;
	int m_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &ref);
	Bureaucrat &operator=(Bureaucrat const &ref);
	virtual ~Bureaucrat();
	std::string const & getName() const;
	void setName(std::string name);
	int getGrade() const;
	void setGrade(int grade);
	void incrementGrade();
	void decrementGrade();
	void signForm(AForm &form) const;
	void executeForm(AForm &form) const;
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

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src);

#endif
