#include "Zombie.hpp"

int main() {
    Zombie* newz;

    newz = newZombie("Zombie1");
    newz->announce();
    delete newz;

    randomChump("Zombie2");
    return 0;
}