#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <iterator>
#include <deque>
#include <list>

int main(void)
{
    std::vector<int> myvector;
    std::deque<int> mydeque;
    std::list<int> mylist;

    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);
    mydeque.push_back(1);
    mydeque.push_back(2);
    mydeque.push_back(3);
    mydeque.push_back(4);
    mydeque.push_back(5);
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    mylist.push_back(4);
    mylist.push_back(5);
    easyfind(myvector, 1);
    easyfind(mydeque, 6);
    easyfind(mylist, 8);
    return (0);
}