#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	int num_zombie;
	std::cout << "Input zombie number ";
	std::cin >> num_zombie;

	int i;
	zombie = zombieHorde(num_zombie, "Dendi");
	for(i = 0; i < num_zombie; i++)
		zombie->announce();
	delete [] zombie;
	return (0);
}