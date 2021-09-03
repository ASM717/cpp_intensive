/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:25:39 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/03 13:09:16 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	m_point_value = 0;
	return ;
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
