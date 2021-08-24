#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type){
	this->m_type = type;
}

Weapon::~Weapon(void){}

const std::string &Weapon::getType() const
{
	return m_type;
}

void Weapon::setType(std::string type)
{
	m_type = type;
}