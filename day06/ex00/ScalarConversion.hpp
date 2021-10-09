/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:07:28 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/09 13:56:56 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
#define SCALAR_CONVERSION_HPP

#include <iostream>
#include <cmath>

class ScalarConversion
{
private:
	float m_value;
	char m_char_value;
	ScalarConversion();
public:
	ScalarConversion(float value);
	ScalarConversion(char char_value);
	ScalarConversion(ScalarConversion const &ref);
	ScalarConversion &operator=(ScalarConversion const &ref);
	~ScalarConversion();
	float getValue();
	char getCharValue();

	void toChar();
	void toInteger();
	void toFloat();
	void toDouble();
};

std::ostream& operator<<(std::ostream& out, ScalarConversion& src);

#endif
