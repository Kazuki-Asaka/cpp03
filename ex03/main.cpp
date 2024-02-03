#include "ScavTrap.hpp"

// __attribute__((destructor))
// static void destrucor() {
// 	system("leaks -q ex01");
// }

int main(void) {
	// ClapTrap person("akazuki");
	// ClapTrap person1(person);
	// ClapTrap person2;

	// person2 = person1;

	// person.attack("kazuki");
	// person.takeDamage(10);
	// person.beRapaired(10);
	// for (int i = 0; i < 11 ; i++) {
	// 	person.attack("a");
	// }

	// std::cout << "----------------------------"<< std::endl;
	// person1.attack("taro");
	// person1.beRapaired(10);
	// person1.takeDamage(10);
	// for (int i = 0; i < 11 ; i++) {
	// 	person1.beRapaired(10);
	// }

	// std::cout << "----------------------------"<< std::endl;
	// person2.attack("hanako");
	// person2.beRapaired(10);
	// person2.takeDamage(10);

	// person2.takeDamage(10);
	// person2.attack("hanako");
	// person2.beRapaired(10);

	std::cout << "--------------ScavTrap--------------"<< std::endl;
	ScavTrap person3("akazuki");
	ScavTrap person4(person3);
	ScavTrap person5;

	person5 = person3;

	person3.attack("kazuki");
	person3.takeDamage(100);
	person3.beRapaired(100);
	for (int i = 0; i < 51 ; i++) {
		person3.attack("a");
	}
	person3.guardGate();

	std::cout << "----------------------------"<< std::endl;
	person4.attack("taro");
	person4.beRapaired(10);
	person4.takeDamage(20);
	for (int i = 0; i < 51 ; i++) {
		person4.beRapaired(10);
	}
	person4.guardGate();

	std::cout << "----------------------------"<< std::endl;
	person5.attack("hanako");
	person5.beRapaired(10);
	person5.takeDamage(20);

	person5.takeDamage(20);
	person5.attack("hanako");
	person5.beRapaired(10);
	person5.guardGate();
}