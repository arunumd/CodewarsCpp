/**
 * @brief A simple program to return the idex where an array is
 * equal sided
 * @author Arun Kumar Devarajulu
 * @date February 1, 2020
 * @copyright Copyright 2020, Arun Kumar Devarajulu. All rights reserved
 */
#include <iostream>
#include <vector>

/**
 * @brief A function to return the idex of equal sides of an array.
 * We first calculate the total sum of the array in one iteration.
 * Later, we compare the sum until now with the sum after now and
 * see if they are equal
 * @param numbers is an input array of numbers to be compared
 * @return -1 if no such equal sided index exists, and index if an
 * equal sided index exists
 */
int find_even_index(const std::vector<int> &numbers) {
    int total_sum = 0;
    for (auto const &number : numbers) {
        total_sum += number;
    }
    int sum_previous = 0;
    int sum_current = 0;
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        sum_current += *it;
        if (total_sum - sum_current == sum_previous)
            return std::distance(numbers.begin(), it);
        sum_previous += *it;
    }
    return -1;
}

int main() {
    std::cout << find_even_index({1, 2, 3, 4, 5, 6, 7, 8, 9}) << std::endl;
    return 0;
}
