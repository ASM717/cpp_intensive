#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
	void debug( void );
	void info (void );
	void warning( void );
	void error( void );
	std::string m_level[4];
public:
	Karen(void);
	~Karen();
	void complain( std::string level );
};

#endif
