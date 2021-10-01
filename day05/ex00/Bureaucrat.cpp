/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:20:15 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/01 13:18:55 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
	m_name = name;
	m_grade = grade;
	if (m_grade < 1)
		throw GradeTooLowException();
	if (m_grade > 150)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref)
{
	*this = ref;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &ref)
{
	if (this == &ref)
		return *this;
	m_name = ref.m_name;
	m_grade = ref.m_grade;
	if (m_grade < 1)
		throw GradeTooLowException();
	if (m_grade > 150)
		throw GradeTooHighException();
	return *this;
}

Bureaucrat::~Bureaucrat(){}

std::string const & Bureaucrat::getName() const
{
	return m_name;
}

void Bureaucrat::setName(std::string name)
{
	m_name = name;
}

int Bureaucrat::getGrade() const
{
	return m_grade;
}

void Bureaucrat::setGrade(int grade)
{
	m_grade = grade;
	if (m_grade < 1)
		throw GradeTooLowException();
	if (m_grade > 150)
		throw GradeTooHighException();
}

void Bureaucrat::incrementGrade()
{
	m_grade++;
	if (m_grade > 150)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	m_grade--;
	if (m_grade < 1)
		throw GradeTooLowException();
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
