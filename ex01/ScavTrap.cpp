#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = rhs;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	
	ClapTrap::operator=(rhs);
	return(*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string target) {
	if (this -> energy_point <= 0)
		std::cout << this -> name << "is out of energy. " << this -> name << " has " << this -> energy_point << " points of energy" <<std::endl;
	else if (this -> hit_point <= 0) 
		std::cout << this -> name << "is dead. " << this -> name << " has " << this -> hit_point << " points of hit "<< std::endl;
	else {
		std::cout << "ScavTrap " << this -> name << " attacks " << target <<", causing " << this -> attack_damage << " points of damage!" << std::endl;
		this -> energy_point = this -> energy_point - 1;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}