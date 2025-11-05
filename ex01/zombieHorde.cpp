#include "Zombie.hpp"

// It must allocate N Zombie objects in a single allocation. 
// Then, it must initialize the zombies, giving each of them the name passed as a parameter.
// The function returns a pointer to the first zombie.
// Implement your own tests to ensure that your zombieHorde() function works as ex- pected.
// Try calling announce() for each of the zombies.

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        horde[i].setName(name);
        horde[i].announce();
    }
    return (horde);
}