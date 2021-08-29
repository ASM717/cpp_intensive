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
	Fixed & operator=(const Fixed &ref);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream & operator << (std::ostream& out, Fixed const & ref);

#endif
