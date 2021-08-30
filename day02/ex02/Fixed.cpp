#include "Fixed.hpp"

Fixed::Fixed()
{
	m_point_value = 0;
	return ;
}

Fixed::Fixed(int const num)
{
	m_point_value = num << m_bits;
}

Fixed::Fixed(float const num)
{
	m_point_value = (int)roundf(num * (1 << m_bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed & ref)
{
	m_point_value = ref.m_point_value;
	//*this = ref;
	return ;
}

Fixed &Fixed::operator=(const Fixed & ref)
{
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

//Six comparison operators:

bool Fixed::operator==(const Fixed &ref) const
{
	return (m_point_value == ref.m_point_value);
}

bool Fixed::operator!=(const Fixed &ref) const
{
	return (m_point_value != ref.m_point_value);
}

bool Fixed::operator<(const Fixed &ref) const
{
	return (m_point_value < ref.m_point_value);
}

bool Fixed::operator>(const Fixed &ref) const
{
	return (m_point_value > ref.m_point_value);
}

bool Fixed::operator<=(const Fixed &ref) const
{
	return (m_point_value <= ref.m_point_value);
}

bool Fixed::operator>=(const Fixed &ref) const
{
	return (m_point_value >= ref.m_point_value);
}

//Four arithmetic operators (* / + -)
Fixed Fixed::operator+(const Fixed &ref) const
{
	Fixed res;

	res.setRawBits(m_point_value + ref.m_point_value);
	return (res);
}

Fixed Fixed::operator-(const Fixed &ref) const
{
	Fixed res;

	res.setRawBits(m_point_value - ref.m_point_value);
	return (res);
}

Fixed Fixed::operator*(const Fixed &ref) const
{
	Fixed fix;

	fix.setRawBits((m_point_value * ref.m_point_value) / (1 << m_bits));
	return (fix);
}

Fixed Fixed::operator/(const Fixed &ref) const
{
	Fixed fix;

	fix.setRawBits((m_point_value / ref.m_point_value) * (1 << m_bits));
	return (fix);
}

//pref++/--
Fixed& Fixed::operator++()
{
	m_point_value += 1;
	return (*this);
}

Fixed& Fixed::operator--()
{
	m_point_value -= 1;
	return (*this);
}

//post ++/--
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

//max
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if(a > b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if(a > b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if(a < b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if(a < b)
		return (a);
	else
		return (b);
}
