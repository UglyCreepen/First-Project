#include <iostream>
#include <vector>
#include "inout.h"

void read(std::vector<int>& vec) {
    int n;
    std::cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
}