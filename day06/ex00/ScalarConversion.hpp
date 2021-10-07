/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:07:28 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/07 13:06:46 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
#define SCALAR_CONVERSION_HPP

#include <iostream>

class ScalarConversion
{
private:

public:
	ScalarConversion();
	~ScalarConversion();


	class ImpossibleExcep : public std::exception
	{
		const char *what() const throw()
		{
			return "impossible";
		}
	};

	class NotDisplayableExcep : public std::exception
	{
		const char *what() const throw()
		{
			return "Non displayable";
		}
	};

	class ErrorArgExcep : public std::exception
	{
		const char *what() const throw()
		{
			return "Error argument!";
		}
	};
};

#endif
