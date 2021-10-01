/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:29:42 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/01 14:06:11 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : m_formName("default"), m_signGrade(150), m_execGrade(150), m_signed(false)
{
//	m_formName = "default";
//	m_signGrade = 150;
//	m_execGrade = 150;
//	m_signed = false;
}

Form::Form(std::string const &formName, int signGrade, int execGrade) :
m_formName(formName), m_signGrade(signGrade), m_execGrade(execGrade), m_signed(false)
{
//	m_formName = formName;
//	m_signGrade = signGrade;
//	m_execGrade = execGrade;
//	m_signed = isSigned;
	if (m_execGrade < 1 || m_signGrade < 1)
		throw Form::GradeTooHighException();
	if (m_execGrade > 150 || m_signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &ref) :
m_formName(ref.m_formName), m_signGrade(ref.m_signGrade),
m_execGrade(ref.m_execGrade), m_signed(ref.m_signed)
{
//	m_formName = ref.m_formName;
//	m_signed = ref.m_signed;
//	m_signGrade = ref.m_signGrade;
//	m_execGrade = ref.m_execGrade;
	*this = ref;
	if (m_execGrade < 1 || m_signGrade < 1)
		throw Form::GradeTooHighException();
	if (m_execGrade > 150 || m_signGrade > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(Form const &ref)
{
	m_signed = ref.m_signed;
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return RED"Form::GradeTooHighException::Grade too High" ;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return RED"Form::GradeTooLowException::Grade too Low";
}

std::string const & Form::getFormName() const
{
	return m_formName;
}

int Form::getSignGrade() const
{
	return m_signGrade;
}

int Form::getExecGrade() const
{
	return m_execGrade;
}

bool Form::getSigned() const
{
	return m_signed;
}

void Form::beSigned(Bureaucrat const &b_crat)
{
	if (b_crat.getGrade() > m_signGrade)
		throw GradeTooLowException();
	m_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form const &src)
{
	out << SKY << src.getFormName() << " form grade need sign "
	<< src.getSignGrade() << " form grade need to exec "
	<< src.getExecGrade() << " form is signed "
	<< src.getSigned();
	return (out);
}

Form::~Form(){}
