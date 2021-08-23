#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("BrainDead");
	zombie->announce();
	delete (zombie);

	randomChump("EvilDead");
	return (0);
}