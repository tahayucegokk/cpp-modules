#include "Zombie.hpp"

int main() {
    Zombie *foo = newZombie("Foo");
   
    foo->announce();
    randomChump("Bar");
    delete foo;
}
