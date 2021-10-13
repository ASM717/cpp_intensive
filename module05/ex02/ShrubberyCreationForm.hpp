/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:23:48 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 13:41:13 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string m_target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &ref);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &ref);
	virtual ~ShrubberyCreationForm();
	std::string const &getSchrubTarget() const;
	virtual void execute(Bureaucrat const &executor) const;
};

#endif
