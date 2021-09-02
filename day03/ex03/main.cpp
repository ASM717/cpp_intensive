#include "DiamondTrap.hpp"

int main(void)
{
//	DiamondTrap jkeum("jkeum");
//	DiamondTrap hyunlee("hyunlee");
//	DiamondTrap me;
//
//	me = jkeum;
//	me.attack(hyunlee.getName());
//	hyunlee.takeDamage(me.getAttackDamage());
//	hyunlee.beRepaired(10);
//	me.guardGate();
//	me.highFivesGuys();
//	me.whoAmI();
//	hyunlee.whoAmI();

	DiamondTrap diamondTrap("Biba");
	DiamondTrap diamondTrap1("Boba");
	DiamondTrap copy = diamondTrap;

	copy.attack(diamondTrap1.getName());
	diamondTrap1.takeDamage(copy.getAttackDamage());
	diamondTrap1.beRepaired(10);
	copy.guardGate();
	copy.highFivesGuys();
	copy.whoAmI();
	diamondTrap1.whoAmI();

	return (0);
}
