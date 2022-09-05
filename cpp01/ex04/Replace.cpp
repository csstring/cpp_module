#include "Replace.hpp"
#include <iostream>

Replace::Replace(char *s1, char *s2)
{
    this->s1.assign(s1);
    this->s2.assign(s2);
}

Replace::~Replace()
{}

int    Replace::getInOutFile(char **av)
{
    std::string temp;

    temp.assign(av[1]);
    i_file.open(temp, std::fstream::in);
    if (i_file.fail())
    {
        std::cout << "read file open error" << std::endl;
        return (0);
    }
    temp.append(".replace");
    o_file.open(temp, std::fstream::out | std::fstream::trunc);
    if (o_file.fail())
    {
        std::cout << "out file open error" << std::endl;
        return (0);
    }
    return (1);
}

void Replace::doReplace(void)
{
    std::string temp;
    size_t s2_length = s2.size();
    size_t s1_length = s1.size();
    size_t found;

    while (getline(i_file, temp))
    {
        found = 0;
        found = temp.find(this->s1, found);
        while (found != std::string::npos)
        {
            temp.erase(found, s1_length);
            temp.insert(found, s2);
            found = temp.find(this->s1, found + s2_length);
        }
        o_file << temp << std::endl;
        temp.clear();
    }
    o_file.close();
    i_file.close();
}