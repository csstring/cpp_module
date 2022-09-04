#include <iostream>
#include <string>

int main(void)
{
    std::string origin;

    origin.assign("HI THIS IS BRAIN");
    std::string *stringPTR = &origin;
    std::string &stringREF = origin;

    std::cout << "address origin : "<< &origin << std::endl;
    std::cout << "address stringPTR : " << stringPTR << std::endl;
    std::cout << "address stringREF : " << &stringREF << std::endl;

    std::cout << "origin value : " << origin << std::endl;
    std::cout << "stringPTR value : "<< *stringPTR << std::endl;
    std::cout << "stringREF value : "<< stringREF << std::endl;
    return (0);
}