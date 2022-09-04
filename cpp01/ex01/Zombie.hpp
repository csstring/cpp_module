#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie
{
private:
    std::string name;
public:
    void    announce(void);
    void    setMyName(std::string name);
    Zombie(std::string name);
    Zombie(void);
    ~Zombie();
};

Zombie  *ZombieHorde(int N, std::string name);

#endif