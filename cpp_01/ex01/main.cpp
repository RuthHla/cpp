#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(1, "Bernard");
    delete[] horde;
    return (0);
}
