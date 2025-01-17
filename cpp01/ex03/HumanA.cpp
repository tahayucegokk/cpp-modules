#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
}

void HumanA::attack()
{
    std::cout << name << " attacks with his: " << weapon.getType() << std::endl;
}