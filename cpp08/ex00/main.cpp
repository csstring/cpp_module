#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <type_traits>

// Trait to check if a type is a stack
template <typename T, T v>
struct typeDispacher {
    static const T value = v;
};

typedef typeDispacher<bool, true> true_type;
typedef typeDispacher<bool, false> false_type;

template <typename T>
struct is_stack : false_type {};

template <typename T, typename Container>
struct is_stack<std::stack<T, Container>> : true_type {};

template <typename T>
struct is_queue : false_type {};

template <typename T, typename Container>
struct is_queue<std::queue<T, Container>> : true_type {};

template <typename Container>
void easyFind(Container& container, int index)
{
    if (is_stack<Container>::value)
    {
        std::cout << "Processing stack..." << std::endl;
    }
    else if (is_queue<Container>::value)
    {
        std::cout << "Processing queue..." << std::endl;
    }
    else
    {
        std::cout << "Processing generic container..." << std::endl;
    }
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    easyFind(vec, 3);

    std::list<int> lst = {6, 7, 8, 9, 10};
    easyFind(lst, 8);

    std::stack<int> stk;
    easyFind(stk, 2);

    std::queue<int> que;
    easyFind(que, 1);

    return 0;
}

