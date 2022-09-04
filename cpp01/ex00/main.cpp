#include "Zombie.hpp"

int main(void)
{
    Zombie  *heap_zombie1;
    Zombie  *heap_zombie2;
    Zombie  temp;

    temp.announce();
    randomChump("stack_zombie");
    heap_zombie1 = newZombie("heap_zombie1");
    heap_zombie1->announce();
    heap_zombie2 = newZombie("heap_zombie2");
    heap_zombie2->announce();
    delete heap_zombie1;
    delete heap_zombie2;
    return (0);
}