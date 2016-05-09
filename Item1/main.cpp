//
// Created by wegamekinglc on 16-5-9.
//

#include "functions.hpp"
#include <iostream>
#include <array>

int main() {
    const char name[] = "J. P. Briggs";

    std::cout << arraySize(name) << std::endl;

    int keyVals[] = {1, 3, 7, 9, 11, 22, 35};

    std::array<int, arraySize(keyVals)> mappedVals;
    std::cout << mappedVals.size() << std::endl;

    return 0;
}

