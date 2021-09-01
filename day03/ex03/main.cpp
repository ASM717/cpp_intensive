#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	clapTrap("Biba");
	FragTrap	clapTrap2("Boba");
	FragTrap	copyTrap(clapTrap2);
	std::cout << "------------------" << std::endl;
	clapTrap2.attack(clapTrap.getName());
	clapTrap.takeDamage(clapTrap2.getAttackDamage());
	clapTrap.attack("Boba");
	clapTrap.beRepaired(5);
	clapTrap2.highFivesGuys();
	std::cout << "------------------" << std::endl;
	return (0);
}
