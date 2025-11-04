#include "Zombie.hpp"

int main()
{
    randomChump("one");
    Zombie *z_two = newZombie("two");
    z_two->announce();
    delete z_two;

    return (0);
}