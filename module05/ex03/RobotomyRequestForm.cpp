/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:13:35 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 19:43:36 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm("RobotomyRequestForm", 72, 45)
{
	m_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref) : AForm(ref)
{
	m_target = ref.getRobotTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	if (this == &ref)
		return *this;
	return *this;
}

std::string const & RobotomyRequestForm::getRobotTarget() const
{
	return m_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::cout << "Drilling noises...Buuurrrrr rrrrr..." << std::endl;
	if (rand() % 2 == 0)
		std::cout << YEL << getRobotTarget() << " has been robotomized successfully 50\% of the time" << std::endl;
	else
		std::cout << GREEN << getRobotTarget() << " hasn't been robotomized successfully 50\% of the time" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}
