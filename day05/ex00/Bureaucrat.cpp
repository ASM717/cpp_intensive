/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:20:15 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/07 15:35:51 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : m_name(name)
{
	m_grade = grade;
	if (m_grade < 1)
		throw GradeTooHighException();
	if (m_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref) : m_name(ref.m_name)
{
	*this = ref;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &ref)
{
	if (this == &ref)
		return *this;
	m_grade = ref.m_grade;
	if (m_grade < 1)
		throw GradeTooHighException();
	if (m_grade > 150)
		throw GradeTooLowException();
	return *this;
}

Bureaucrat::~Bureaucrat(){}

std::string const & Bureaucrat::getName() const
{
	return m_name;
}

int Bureaucrat::getGrade() const
{
	return m_grade;
}

void Bureaucrat::setGrade(int grade)
{
	m_grade = grade;
	if (m_grade < 1)
		throw GradeTooHighException();
	if (m_grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::incrementGrade()
{
	m_grade--;
	if (m_grade > 150)
		throw GradeTooLowException();
	
}

void Bureaucrat::decrementGrade()
{
	m_grade++;
	if (m_grade < 1)
		throw GradeTooHighException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return RED"Bureaucrat::GradeTooHighException::Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return RED"Bureaucrat::GradeTooLowException::Grade too Low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << SKY << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}
