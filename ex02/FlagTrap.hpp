#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {
public:
	FlagTrap();
	FlagTrap(std::string name);
	FlagTrap(const FlagTrap& rhs);
	FlagTrap& operator=(const FlagTrap& rhs);
	~FlagTrap();
	void highFiveGuys(void);
};

#endif