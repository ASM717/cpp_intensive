#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Second default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Second constructor called" << std::endl;
	this->setName(name);
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << "Second copy constructor called" << std::endl;
	*this = ref;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << "Second assignation operator called" << std::endl;
	this->ClapTrap::operator=(ref);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Second destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}