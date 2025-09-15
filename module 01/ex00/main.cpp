#include "Zombie.hpp"

int main() {
    Zombie* newz;

    newz = newZombie("test1");
    newz->announce();
    delete newz;

    randomChump("test2");
    return 0;
}