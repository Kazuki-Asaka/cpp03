#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& rhs);
	ClapTrap& operator=(const ClapTrap& rhs);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRapaired(unsigned int amount);
protected:
	std::string name;
	unsigned int hit_point;
	unsigned int energy_point;
	unsigned int attack_damage;
	const static unsigned int clap_hit = 10;
	const static unsigned int clap_energy = 10;
	const static unsigned int clap_damage = 0;
};

#endif