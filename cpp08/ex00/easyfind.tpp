#include <iostream>

template <typename T>
typename T::iterator easyfind(T& container, int index)
{
    typename T::iterator it;
    it = find(container.begin(), container.end(), index);
    if (it == container.end())
        std::cout << "container don't have : "<< index <<std::endl;
    else
        std::cout << "container have : " << *it << std::endl;
    return (it);
    std::cout << "chec";
}