/**
 * @file main.cpp
 * @author Arun Kumar Devarajulu
 * @copyright Copyright 2020, Arun Kumar Devarajulu. All rights reversed
 * @date February 1, 2020
 */
#include <iostream>
#include <string>
using namespace std ;

/**
 * @brief A simple function to reverse a string using reverse iterator.
 * The function has a reverse iterator that sequentially puts elements
 * of input string output string
 * @param str Input string which is to be reversed
 * @return Output string which is reversed
 */
string reverseString (string str )
{
    std::string reversed_string;
    for(auto it = str.rbegin(); it != str.rend(); it++){
        reversed_string += *it;
    }
    return reversed_string ;
}

int main() {
    std::cout << reverseString("ramuk nura") << std::endl;
    return 0;
}
