#include <iostream>
#include <string>
#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "agrument count error"<< std::endl;
        return (1);
    }
    else if (av[2][0] == '\0' || av[3][0] == '\0')
    {
        std::cout << "null char is invalied" << std::endl;
        return (1);
    }

    Replace replace(av[2], av[3]);

    if (!replace.getInOutFile(av))
        return (1);
    replace.doReplace();
    return (0);
}