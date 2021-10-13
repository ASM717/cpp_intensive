/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:49:08 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/06 10:42:47 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:

public:
	Intern();
	Intern(Intern const &ref);
	Intern& operator=(Intern const &ref);
	~Intern();
	AForm *makeForm(std::string const &form, std::string const &target);
	class RequestedFormIsNotKnown : public std::exception
	{
	public:
		RequestedFormIsNotKnown(){}
		virtual ~RequestedFormIsNotKnown() throw(){}
		virtual const char* what() const throw();
	};
};

#endif
