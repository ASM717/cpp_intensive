/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:27:10 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/30 16:27:11 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int m_point_value;
	static const int m_bits = 8;
public:
	Fixed();
	Fixed(int const num);
	Fixed(float const num);
	Fixed(const Fixed &ref);
	Fixed& operator=(const Fixed &ref);
	~Fixed();
	// Six comparison operators:
	bool operator==(const Fixed &ref) const;
	bool operator!=(const Fixed &ref) const;
	bool operator<(const Fixed &ref) const;
	bool operator>(const Fixed &ref) const;
	bool operator<=(const Fixed &ref) const;
	bool operator>=(const Fixed &ref) const;

	//Four arithmetic operators:
	Fixed operator+(const Fixed &ref) const;
	Fixed operator-(const Fixed &ref) const;
	Fixed operator*(const Fixed &ref) const;
	Fixed operator/(const Fixed &ref) const;

	// pref++ | pref--
	Fixed& operator++();
	Fixed& operator--();

	//post ++ | post --
	Fixed operator++(int);
	Fixed operator--(int);

	//max
	Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	//min
	Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream & operator << (std::ostream& out, Fixed const & ref);

#endif
