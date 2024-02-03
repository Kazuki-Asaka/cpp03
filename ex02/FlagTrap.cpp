#include "FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap() {
	std::cout << "FlagTrap Default constructor called" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
	std::cout << "FlagTrap Name constructor called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap& rhs) {
	std::cout << "FlagTrap Copy constructor called" << std::endl;
	*this = rhs;	
}

FlagTrap& FlagTrap::operator=(const FlagTrap& rhs) {
	ClapTrap::operator=(rhs);
	std::cout << "FlagTrap Copy assignment called" << std::endl;
	return(*this);
}

FlagTrap::~FlagTrap() {
	std::cout << "FlagTrap Destructor called" << std::endl;
}

void FlagTrap::highFiveGuys(void) {
	std::cout << "positive high fives request"<< std::endl;
}