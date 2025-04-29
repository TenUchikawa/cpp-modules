#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T const &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void increment(T &x)
{
    x++;
}

int main()
{

    int intArr[] = {0, 1, 2, 3, 4};
    size_t intLen = sizeof(intArr) / sizeof(intArr[0]);

    std::cout << "Original integers:" << std::endl;
    iter(intArr, intLen, print);

    iter(intArr, intLen, increment<int>);
    std::cout << "\nAfter increment:" << std::endl;
    iter(intArr, intLen, print);

    std::string strArr[] = {"Hello", "World", "!"};
    size_t strLen = sizeof(strArr) / sizeof(strArr[0]);

    std::cout << "\nStrings:" << std::endl;
    iter(strArr, strLen, print);

    return 0;
}
