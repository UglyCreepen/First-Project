#include <iostream>
#include <vector>
#include "Project\inout.h"

void print(const std::vector<int>& vec) {
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

