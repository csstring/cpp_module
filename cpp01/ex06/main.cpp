#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    Harl    temp;

    if (ac != 2)
    {
        std::cout << "argument count error" << std::endl;
        return (1);
    }
    temp.complain(av[1]);
    return (0);
}