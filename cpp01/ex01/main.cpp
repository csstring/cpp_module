#include "Zombie.hpp"

int main(void)
{
    Zombie  *heap_zombie1;
    Zombie  temp;

    temp.announce();
    heap_zombie1 = ZombieHorde(5, "111");
    for (int i = 0; i < 5; i++)
        heap_zombie1[i].announce();
    delete []heap_zombie1;
    return (0);
}