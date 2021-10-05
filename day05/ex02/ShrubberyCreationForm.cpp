/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:23:45 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 15:09:51 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("ShrubberyCreationForm", 145, 137)
{
	m_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref) : AForm(ref)
{
	m_target = ref.getSchrubTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	if (this == &ref)
		return *this;
	return *this;
}

std::string const & ShrubberyCreationForm::getSchrubTarget() const
{
	return m_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::ofstream file_tree;
	std::string suffix = "_shrubbery";
	file_tree.open((m_target + suffix).c_str());
	if (!file_tree.is_open())
		std::cerr << "Error to open file!" << std::endl;
	else
	{
		file_tree <<
"             * **** " << std::endl <<
"           ** ******" << std::endl <<
"        * **** *********" << std::endl <<
"     *#########}{########*" << std::endl <<
"    *##########}{##########*" << std::endl <<
"   *##  #######}{ ######## ##*" << std::endl <<
"  *#_##### ##  }{############*" << std::endl <<
"  *# #*#* # ## }{/  #### ##/#*" << std::endl <<
"  **#*-*##`**  }{.###---###-*" << std::endl <<
"         **### }{ /**" << std::endl <<
"              #}{*" << std::endl <<
"               }{" << std::endl <<
"               }{" << std::endl <<
"       ___--##..##--___" << std::endl;
		file_tree.close();
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

