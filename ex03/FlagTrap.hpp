#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public virtual ClapTrap {
public:
	// unsigned int hit_point_tmp;
	// unsigned int energy_point_tmp;
	// unsigned int attack_damage_tmp;
	FlagTrap();
	FlagTrap(std::string name);
	FlagTrap(const FlagTrap& rhs);
	FlagTrap& operator=(const FlagTrap& rhs);
	~FlagTrap();
	void highFiveGuys(void);
	const static unsigned int flag_hit = 100;
	const static unsigned int flag_energy = 100;
	const static unsigned int flag_damage = 30;
};

#endif