#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Fourth default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap::ClapTrap(name), ScavTrap::ScavTrap(), FragTrap::FragTrap()
{
	std::cout << "Fourth default constructor called" << std::endl;
	this->m_name = name;
	ClapTrap::setName(name + "_clap_name");
	this->FragTrap::getHitpoints();
	this->ScavTrap::getEnergyPoints();
	this->FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
	std::cout << "Fourth copy constructor called" << std::endl;
	*this = ref;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ref)
{
	std::cout << "Fourth assignation operator called" << std::endl;
	this->ClapTrap::operator=(ref);
	m_name = ref.m_name;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << getName() << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Fourth destructor called" << std::endl;
}
