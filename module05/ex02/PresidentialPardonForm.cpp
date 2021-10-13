/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:03:50 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 14:11:27 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm("PresidentialPardonForm", 25, 5)
{
	m_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref) : AForm(ref)
{
	m_target = ref.getPresidentTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	if (this == &ref)
		return *this;
	return *this;
}

std::string const & PresidentialPardonForm::getPresidentTarget() const
{
	return m_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::cout << getPresidentTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
