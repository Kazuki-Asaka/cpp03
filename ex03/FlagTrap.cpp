#include "FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap() {
	std::cout << "FlagTrap Default constructor called" << std::endl;
	this -> hit_point_tmp = this -> hit_point;
	this -> energy_point_tmp = this -> energy_point;
	this -> attack_damage_tmp = this -> attack_damage;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
	std::cout << "FlagTrap Name constructor called" << std::endl;
	this -> hit_point_tmp = this -> hit_point;
	this -> energy_point_tmp = this -> energy_point;
	this -> attack_damage_tmp = this -> attack_damage;
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