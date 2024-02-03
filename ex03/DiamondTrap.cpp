#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(){
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this -> name = "No name Diamond";
	this -> hit_point = FlagTrap::hit_point_tmp;
	this -> energy_point = ScavTrap::energy_point_tmp;
	this -> attack_damage = FlagTrap::attack_damage_tmp;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this -> name = name;
	this -> hit_point = FlagTrap::hit_point_tmp;
	this -> energy_point = ScavTrap::energy_point_tmp;
	this -> attack_damage = FlagTrap::attack_damage_tmp;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = rhs;
}

const DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
	std::cout << "DiamondTrap Copy assignment called" << std::endl;
	ClapTrap::operator=(rhs);
	return(*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this -> name << "parent class is " << ClapTrap::name << std::endl;
}