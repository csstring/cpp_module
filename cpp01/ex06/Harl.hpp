#ifndef HARL_HPP
#define HARL_HPP
#include <string>

class  Harl
{
    typedef struct s_harl
    {
        std::string key;
        void    (Harl::*got_complain)(void);
    } t_harl;

private:
    void    debug(void);
    void    info(void);
    void    waring(void);
    void    error(void);
    t_harl harl[4];
public:
    void complain(std::string level);
    Harl(void);
};

#endif