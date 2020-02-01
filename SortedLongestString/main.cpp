/**
 * @file main.cpp
 * @brief Program to construct a sorted string of unique characters obtained
 * from two strings of characters in lowercase
 * @author Arun Kumar Devarajulu
 * @date February 1, 2020
 * @copyright Copyright 2020, Arun Kumar Devarajulu. All rights reserved
 */

#include <iostream>
#include <map>

/**
 * @brief Class to construct a sorted string of unique characters obtained
 * from two strings of characters in lowercase
 */
class TwoToOne
{
public:
    /**
     * @brief Static member function to construct a sorted string of unique characters obtained
     * from two strings of characters in lowercase
     * @param s1 First string of lower case characters from a-z
     * @param s2 Second string of lower case characters from a-z
     * @return A sorted unique string of lower case characters from a-z obtained from s1 and s2
     */
    static std::string longest(const std::string &s1, const std::string &s2);
};

std::string TwoToOne::longest(const std::string &s1, const std::string &s2) {
    std::map<char, int> unique_chars;
    for(const auto& element : s1) {
        unique_chars[element]++;
    }
    for(const auto& element : s2) {
        unique_chars[element]++;
    }
    std::string new_string;
    for(auto & unique_char : unique_chars) {
        new_string += unique_char.first;
    }
    return new_string;
}

int main() {
    std::cout << TwoToOne::longest("romeo", "romero") << std::endl;
    return 0;
}
