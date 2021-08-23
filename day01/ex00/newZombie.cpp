#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *nw_zombie = new Zombie();
	nw_zombie->setName(name);
	return (nw_zombie);
}