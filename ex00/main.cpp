#include "ClapTrap.hpp"

int main(void) {
    ClapTrap person("akazuki");
    ClapTrap person1("kazuki");

    for (int i = 0; i < 11 ; i++) {
        person.attack("kazuki");
        person1.takeDamage(10);
        person1.beRapaired(10);
    }

}