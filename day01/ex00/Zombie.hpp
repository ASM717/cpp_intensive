#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string m_name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);
	std::string getName();
	void setName(std::string name);
	void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif