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

	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif