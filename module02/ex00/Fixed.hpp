/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:25:43 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/30 16:25:44 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int m_point_value;
	static const int m_bits = 8;
public:
	Fixed();
	Fixed(const Fixed & ref);
	Fixed & operator=(const Fixed &ref);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
