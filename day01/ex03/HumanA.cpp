#include "HumanA.hpp"

HumanA::HumanA(){}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->m_name = name;
	this->m_weapon = &weapon;
}

HumanA::~HumanA(void) {}

void HumanA::attack(void) const
{
	std::cout << m_name << " " << m_weapon->getType() <<
	std::endl;
	return;
}