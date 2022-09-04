#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
   {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("bow");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("punch");
        jim.attack();
    }
    return (0);
}