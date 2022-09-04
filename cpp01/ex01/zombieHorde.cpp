#include "Zombie.hpp"

void    Zombie::setMyName(std::string name)
{
    this->name.assign(name);
}

Zombie  *ZombieHorde(int N, std::string name)
{
    Zombie  *Horde = new Zombie[N];

    if (!Horde || N < 0)
        return (NULL);
    for (int i = 0; i < N; i++)
        Horde[i].setMyName(name);
    return (Horde);
}