#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
public:
	// unsigned int hit_point_tmp;
	// unsigned int energy_point_tmp;
	// unsigned int attack_damage_tmp;
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& rhs);
	ScavTrap& operator=(const ScavTrap& rhs);
	~ScavTrap();
	void attack(const std::string target);
	void guardGate();
	const static unsigned int scav_hit = 100;
	const static unsigned int scav_energy = 50;
	const static unsigned int scav_damage = 20;
};

#endif