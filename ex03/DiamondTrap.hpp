#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& rhs);
	const DiamondTrap& operator=(const DiamondTrap& rhs);
	~DiamondTrap();
	void attack(std::string& target);
	void whoAmI();
private:
	std::string name;
};

#endif