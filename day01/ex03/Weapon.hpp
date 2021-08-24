#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string m_type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon(void);
	const std::string &getType() const;
	void setType(std::string type);

};

#endif
