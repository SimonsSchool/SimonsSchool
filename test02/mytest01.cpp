#include <iostream>
#include "myexample.hpp"

using namespace myexample;

int main() 
{
    if (get_three() != 3) return 1;
    if (get_three() == 3) { std::cout << "3" << std::endl; } else return 1;
    std::cout << "Passed" << std::endl;
    return 0;
}
