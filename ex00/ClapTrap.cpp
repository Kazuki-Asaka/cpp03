#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

}

ClapTrap::ClapTrap(std::string name) {
	this -> name = name;
	this -> hit_point = 10;
	this -> energy_point = 10;
	this -> attack_point = 0;
}

ClapTrap::ClapTrap(const ClapTrap& rhs){
	this -> name = rhs.name;
}