#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	m_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << getName() << " dead" <<  std::endl;
}

std::string Zombie::getName()
{
	return m_name;
}

void Zombie::setName(std::string name)
{
	m_name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << getName() << "> BraiiiiiiinnnzzzZ..." << std::endl;
}