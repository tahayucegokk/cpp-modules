#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name){
    return new Zombie(name);
}

Zombie::~Zombie() {}