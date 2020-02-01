/**
 * @file : main.cpp
 * @author : Arun Kumar Devarajulu
 * @copyright : Copyright 2020 Arun Kumar Devarajulu. All rights reserved.
 * @brief : Conversion algorithm for converting a
 * roman string literal into its integer equivalent
 */
#include <iostream>
#include <unordered_map>

using namespace std;

/**
 * @brief : Function to convert an ASCII roman literal to an
 * integer. The algorithm is based on human logic wherein, we
 * add two consecutive characters when they are both identical
 * or the current character is lesser than the previous character.
 * Otherwise, we first subtract the last summed character and add
 * the difference between current character and previous character
 * to the sum. This process is done iteratively from index number
 * two to end of string literal if the size of literal is greater
 * than 1. If the size of string is exactly one, then the single
 * literal is returned as the corresponding integer value.
 * **Note:** The sum is initialized as the integer equalent of first
 * element in the input string literal
 * @param: roman being the input ASCII roman string literal. Example:
 * 'XXVIIVLMD' or 'IVLDMMMXXC', etc.
 * @return: The integer equivalent of the input ASCII roman string
 */
int solution(string roman) {
    std::unordered_map<char, int> roman_defs;
    roman_defs['I'] = 1;
    roman_defs['V'] = 5;
    roman_defs['X'] = 10;
    roman_defs['L'] = 50;
    roman_defs['C'] = 100;
    roman_defs['D'] = 500;
    roman_defs['M'] = 1000;
    int sum = roman_defs[roman[0]];
    if (roman.size() == 1)
        return sum;
    else {
        char previous = roman[0];
        for (auto it = roman.begin() + 1; it < roman.end(); it++) {
            if (roman_defs[previous] < roman_defs[*it]) {
                sum -= roman_defs[previous];
                sum += roman_defs[*it] - roman_defs[previous];
            } else
                sum += roman_defs[*it];
            previous = *it;
        }
        return sum;
    }
}

int main() {
    std::cout << solution("XXVVILMCD") << std::endl;
    return 0;
}
