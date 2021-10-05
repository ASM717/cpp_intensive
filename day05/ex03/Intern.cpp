/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:49:10 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 18:44:25 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &ref)
{
	*this = ref;
}

Intern &Intern::operator=(Intern const &ref)
{
	if (this == &ref)
		return *this;
	return *this;
}

AForm* makePresidentForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

AForm* makeRobotForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

AForm* makeShrubberyForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string const &form_name, std::string const &target)
{
	typedef struct s_FormTypes
	{
		std::string form_name;
		AForm *(*func)(std::string const &target);
	} t_FormTypes;
	t_FormTypes forms[] =
	{
		{"presidential pardon", &makePresidentForm},
		{"robotomy request", &makeRobotForm},
		{"shrubbery creation", &makeShrubberyForm}
	};
	int i;
	for (i = 0; i < 3; i++) {
		if (form_name == forms[i].form_name)
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (forms[i].func(target));
		}
	}
	throw RequestedFormIsNotKnown();
	return (NULL);
}

const char* Intern::RequestedFormIsNotKnown::what() const throw()
{
	return RED"Requested form is not known!";
}

Intern::~Intern()
{

}
