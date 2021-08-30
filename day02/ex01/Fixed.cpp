/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:26:12 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/30 16:26:13 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	m_point_value = 0;
	return ;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	m_point_value = num << m_bits;
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	m_point_value = (int)roundf(num * (1 << m_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed & ref)
{
	std::cout << "Copy constructor called" << std::endl;
	m_point_value = ref.m_point_value;
	//*this = ref;
	return ;
}

Fixed &Fixed::operator=(const Fixed & ref)
{
	std::cout << "Assignation operator called" << std::endl;
	m_point_value = ref.getRawBits();
	return (*this);
}

std::ostream & operator<< (std::ostream& out, Fixed const & ref)
{
	out << ref.toFloat();
	return (out);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_point_value);
}

void Fixed::setRawBits( int const raw )
{
	m_point_value = raw;
	return ;
}

float Fixed::toFloat( void ) const
{
	return ((float)m_point_value / (float)(1 << m_bits));
}

int Fixed::toInt( void ) const
{
	return (m_point_value >> m_bits);
}
