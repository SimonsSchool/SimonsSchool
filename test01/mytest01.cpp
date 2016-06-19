#include <iostream>
#include "myexample.hpp"

using namespace myexample;

int main() 
{
    if (get_three() != 4) return 1;
    if (get_three() == 3) { std::cout << "3" << std::endl; } else return 1;
    return 0;
}
