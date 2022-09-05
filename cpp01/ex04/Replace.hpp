#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <fstream>

class Replace
{
private:
    std::fstream    o_file;
    std::fstream    i_file;
    std::string s1;
    std::string s2;
public:
    Replace(char *s1, char *s2);
    ~Replace();
    int    getInOutFile(char **av);
    void    doReplace(void);
};

#endif