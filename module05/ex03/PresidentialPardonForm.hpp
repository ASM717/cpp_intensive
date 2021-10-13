/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:32:23 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 14:11:15 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string m_target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &ref);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &ref);
	virtual ~PresidentialPardonForm();
	std::string const &getPresidentTarget() const;
	virtual void execute(Bureaucrat const &executor) const;
};

#endif
