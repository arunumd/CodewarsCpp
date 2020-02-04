/**
 * @file main.cpp
 * @author Arun Kumar Devarajulu
 * @brief C++ Program to find the squared sum of all numbers in a vector
 * @copyright Copyright 2020 Arun Kumar Devarajulu. All rights reserved
 * @date February 3, 2020
 */

#include <iostream>
#include <vector>

/**
 * @brief Function to find the squared sum of all
 * elements in a container (vector)
 * @param numbers is the vector of integers
 * @return the squared sum of all numbers in the vector
 */
int square_sum(const std::vector<int> &numbers) {
    int total = 0;
    for (auto &number : numbers) {
        total += (number * number);
    }
    return total;
}

int main() {
    std::cout << square_sum({78, 343, 22, 41, 4, 7}) << std::endl;
    return 0;
}
