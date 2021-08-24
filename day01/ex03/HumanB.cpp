#include "HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name)
{
	this->m_name = name;
}

HumanB::~HumanB(void) {}

void HumanB::attack(void) const
{
	std::cout << m_name << " " << m_weapon->getType() <<
	std::endl;
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->m_weapon = &weapon;
	return;
}