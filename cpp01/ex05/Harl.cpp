#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
    harl[0].got_complain = &Harl::debug;
    harl[0].key.assign("DEBUG");
    harl[1].got_complain = &Harl::info;
    harl[1].key.assign("INFO");
    harl[2].got_complain = &Harl::warning;
    harl[2].key.assign("WARNING");
    harl[3].got_complain = &Harl::error;
    harl[3].key.assign("ERROR");
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."<< std::endl; 
    std::cout << "I really do!" << std::endl;
}

void   Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money."<< std::endl; 
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. "<< std::endl; 
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl; 
}

void    Harl::complain(std::string level)
{
    for (int i = 0 ; i < 4; i++)
    {
        if (!level.compare(this->harl[i].key))
        {
            (this->*harl[i].got_complain)();
            break;
        }
    }
}