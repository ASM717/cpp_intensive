/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:29:42 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 18:22:44 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : m_formName("default"), m_signGrade(150), m_execGrade(150), m_signed(false)
{

}
AForm::AForm(std::string const &formName) : m_formName(formName), m_signGrade(150), m_execGrade(150), m_signed(false)
{

}
AForm::AForm(std::string const &formName, int signGrade, int execGrade) :
m_formName(formName), m_signGrade(signGrade), m_execGrade(execGrade), m_signed(false)
{
	if (m_execGrade < 1 || m_signGrade < 1)
		throw AForm::GradeTooHighException();
	if (m_execGrade > 150 || m_signGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &ref) :
	m_formName(ref.m_formName), m_signGrade(ref.m_signGrade),
		m_execGrade(ref.m_execGrade), m_signed(ref.m_signed)
{
	*this = ref;
	if (m_execGrade < 1 || m_signGrade < 1)
		throw AForm::GradeTooHighException();
	if (m_execGrade > 150 || m_signGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm &AForm::operator=(AForm const &ref)
{
	m_signed = ref.m_signed;
	return *this;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return RED"Form::GradeTooHighException::Grade too High" ;
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return RED"Form::GradeTooLowException::Grade too Low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return RED"Form is not signed";
}

std::string const & AForm::getFormName() const
{
	return m_formName;
}

int AForm::getSignGrade() const
{
	return m_signGrade;
}

int AForm::getExecGrade() const
{
	return m_execGrade;
}

bool AForm::getSigned() const
{
	return m_signed;
}

void AForm::beSigned(Bureaucrat const &b_crat)
{
	if (b_crat.getGrade() > m_signGrade)
		throw GradeTooLowException();
	m_signed = true;
}

std::ostream &operator<<(std::ostream &out, AForm const &src)
{
	out << SKY << src.getFormName() << " form grade need sign "
	<< src.getSignGrade() << " form grade need to exec "
	<< src.getExecGrade() << " form is signed "
	<< src.getSigned();
	return (out);
}

AForm::~AForm(){}
