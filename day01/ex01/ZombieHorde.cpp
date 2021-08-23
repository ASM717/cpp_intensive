#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombie = new Zombie[N];

	int i;
	for (i = 0; i < N; i++)
		zombie[i].setName(name);
	return (zombie);
}