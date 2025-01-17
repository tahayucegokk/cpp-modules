#include "Zombie.hpp" 

int main()
{
    Zombie *zombs = zombieHorde(5, "Foo");

    int i = 0;
    while (i < 5) {
        zombs[i].announce();
        i++;
    }
    delete[] zombs;
}