#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
	this -> name = "No name";
	this -> hit_point = 10;
	this -> energy_point = 10;
	this -> attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Name constructor called" << std::endl;
	this -> name = name;
	this -> hit_point = 10;
	this -> energy_point = 10;
	this -> attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& rhs){
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	std::cout << "Copy assignment called" << std::endl;
	this -> name = rhs.name;
	this -> hit_point = rhs.hit_point;
	this -> energy_point = rhs.energy_point;
	this->attack_damage = rhs.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this -> energy_point <= 0) {
		std::cout << this -> name << "is out of energy" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << this -> name << " attacks " << target <<", causing " << this -> attack_damage << " points of damage!" << std::endl;
		this -> energy_point = this -> energy_point - 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this -> hit_point == 0)
		std::cout << this -> name << "is dead" << std::endl;
	else if (this -> hit_point < amount)
		this -> hit_point = 0;
	else
		this -> hit_point = this -> hit_point - amount;
	std::cout << this -> name << " take " << amount <<" points  damage" << std::endl;
}

void ClapTrap::beRapaired(unsigned int amount) {
	if (this -> energy_point <= 0) {
		std::cout << this -> name << "is out of energy" << std::endl;
	}
	else {
		this -> hit_point = this -> hit_point + amount;
		this -> energy_point = this -> energy_point - 1;
		std::cout << this -> name << " " << amount << " recovered" << std::endl;
	}
}