/**
 * @file main.cpp
 * @author Arun Kumar Devarajulu
 * @brief C++ Program to convert an ASCII string to an encoded string
 * @copyright Copyright 2020 Arun Kumar Devarajulu. All rights reserved
 * @date February 1, 2020
 */


#include <iostream>
#include <unordered_map>

/**
 * @brief Function to convert a string into an ASCII encoding of "(" and ")".
 * For each character in the given string "word", we have to place "(" if the
 * character appears only once and ")" if it appears more than once (irrespective
 * of its case). Finally, the encoded string is to be returned. For example :
 * the input string "RoMerO" should return "))(())".
 * @param word The input string which is to be encoded
 * @return The encoded string
 */
std::string duplicate_encoder(const std::string &word) {
    std::unordered_map<char, int> alphabets;
    std::string encoded_word;
    for (auto &alphabet : word) {
        alphabets[tolower(alphabet)]++;
    }
    for (auto &encoding : word) {
        if (alphabets[tolower(encoding)] > 1)
            encoded_word += ")";
        else
            encoded_word += "(";
    }
    return encoded_word;
}

int main() {
    std::cout << duplicate_encoder("thequickbrownthepalebrowdogisnotthefox") << std::endl;
    return 0;
}
