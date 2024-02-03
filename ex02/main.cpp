#include "FlagTrap.hpp"

// __attribute__((destructor))
// static void destrucor() {
// 	system("leaks -q ex02");
// }

int main(void) {
	// ClapTrap person("akazuki");
	// ClapTrap person1(person);
	// ClapTrap person2;

	// person2 = person1;

	// person.attack("kazuki");
	// person.takeDamage(100);
	// person.beRapaired(100);
	// for (int i = 0; i < 101 ; i++) {
	// 	person.attack("a");
	// }

	// std::cout << "----------------------------"<< std::endl;
	// person1.attack("taro");
	// person1.beRapaired(10);
	// person1.takeDamage(30);
	// for (int i = 0; i < 101 ; i++) {
	// 	person1.beRapaired(10);
	// }

	// std::cout << "----------------------------"<< std::endl;
	// person2.attack("hanako");
	// person2.beRapaired(10);
	// person2.takeDamage(30);

	// person2.takeDamage(30);
	// person2.attack("hanako");
	// person2.beRapaired(10);

	std::cout << "--------------FlagTrap-------------"<< std::endl;
	FlagTrap person3("akazuki");
	FlagTrap person4(person3);
	FlagTrap person5;

	person5 = person3;

	person3.attack("kazuki");
	person3.takeDamage(100);
	person3.beRapaired(100);
	for (int i = 0; i < 100 ; i++) {
		person3.attack("a");
	}
	person3.highFiveGuys();
	std::cout << "----------------------------"<< std::endl;
	person4.attack("taro");
	person4.beRapaired(10);
	person4.takeDamage(30);
	for (int i = 0; i < 101 ; i++) {
		person4.beRapaired(10);
	}
	person4.highFiveGuys();
	std::cout << "----------------------------"<< std::endl;
	person5.attack("hanako");
	person5.beRapaired(10);
	person5.takeDamage(30);

	person5.takeDamage(30);
	person5.attack("hanako");
	person5.beRapaired(10);
	person5.highFiveGuys();
}