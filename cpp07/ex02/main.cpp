#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught for negative index: " << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught for out of bounds: " << e.what() << '\n';
    }

    Array<std::string> strings(3);
    strings[0] = "Hello";
    strings[1] = "World";
    strings[2] = "!";
    
    std::cout << "\nString array contents:" << std::endl;
    for (unsigned int i = 0; i < strings.size(); i++)
    {
        std::cout << strings[i] << " ";
    }
    std::cout << std::endl;

    const Array<int> const_arr(3);
    std::cout << "\nConst array size: " << const_arr.size() << std::endl;
    std::cout << "Const array element: " << const_arr[0] << std::endl;

    delete [] mirror;
    return 0;
}
