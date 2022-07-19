#include <iostream>
#include "adder.h"

int main(int, char**) {
    std::cout << "Hello, world! from cmake with lib\n";
    std::cout << "add 15 + 8 = " << add(15, 8);
}
