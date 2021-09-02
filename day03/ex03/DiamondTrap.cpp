#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Fourth default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap::ClapTrap(name),
						ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
	std::cout << "Fourth default constructor called" << std::endl;
	this->m_name = name;
	ClapTrap::m_name = name + "_clap_name";
	m_hitpoints = FragTrap::m_hitpoints;
	m_energy_points = ScavTrap::m_energy_points;
	m_attack_damage = FragTrap::m_attack_damage;
//	ClapTrap::getName() = setName(getName()) << " _clap_name" << std::endl;
//	getHitpoints() = FragTrap::setHitpoints(getHitpoints()) << " _clap_name" << std::endl;
//	getEnergyPoints() = ScavTrap::setEnergyPoints(getEnergyPoints()) << " _clap_name" << std::endl;
//	getAttackDamage() = FragTrap::setAttackDamage(getAttackDamage()) << " _clap_name" << std::endl;
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
	this->m_name = ref.m_name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Fourth destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << getName() << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::getName() << std::endl;
}