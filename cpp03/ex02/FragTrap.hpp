#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class  FragTrap : public ClapTrap
{
private:

public:
    FragTrap(void);
    FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
    FragTrap& operator=(const FragTrap &ref);
    ~FragTrap(void);
	void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif