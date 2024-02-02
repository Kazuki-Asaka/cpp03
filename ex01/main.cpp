#include "ClapTrap.hpp"

// __attribute__((destructor))
// static void destrucor() {
// 	system("leaks -q ex00");
// }

int main(void) {
	ClapTrap person("akazuki");
	ClapTrap person1(person);
	ClapTrap person2;

	person2 = person1;

	person.attack("kazuki");
	person.takeDamage(10);
	person.beRapaired(10);
	for (int i = 0; i < 11 ; i++) {
		person.attack("a");
	}

	std::cout << "----------------------------"<< std::endl;
	person1.attack("taro");
	person1.beRapaired(10);
	person1.takeDamage(10);
	for (int i = 0; i < 11 ; i++) {
		person1.beRapaired(10);
	}

	std::cout << "----------------------------"<< std::endl;
	person2.attack("hanako");
	person2.beRapaired(10);
	person2.takeDamage(10);

	person2.takeDamage(10);
	person2.attack("hanako");
	person2.beRapaired(10);
}