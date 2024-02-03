#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FlagTrap(){
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this -> name = "No name Diamond";
	this -> hit_point = FlagTrap::flag_hit;
	this -> energy_point = ScavTrap::scav_energy;
	this -> attack_damage = FlagTrap::flag_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FlagTrap(name + "_clap_name") {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this -> name = name;
	this -> hit_point = FlagTrap::flag_hit;
	this -> energy_point = ScavTrap::scav_energy;
	this -> attack_damage = FlagTrap::flag_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = rhs;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
	std::cout << "DiamondTrap Copy assignment called" << std::endl;
	ClapTrap::operator=(rhs);
	return(*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this -> name << "parent class is " << ClapTrap::name << std::endl;
}