/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:13:45 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 14:16:17 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string m_target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &ref);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &ref);
	virtual ~RobotomyRequestForm();
	std::string const &getRobotTarget() const;
	virtual void execute(Bureaucrat const &executor) const;
};

#endif
