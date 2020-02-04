/**
 * @file main.cpp
 * @author Arun Kumar Devarajulu
 * @brief C++ Program to find all possible squares which can be
 * inscribed inside a rectangle
 * @copyright Copyright 2020 Arun Kumar Devarajulu. All rights reserved
 * @date February 3, 2020
 */

#include <iostream>
#include <vector>

/**
 * @brief Class to find out all possible squares within a
 * rectangular region where length is different from width
 */
class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth);
};

/**
 * @brief Static member function to iteratively compare the
 * difference between length and width and estimate the
 * square that can fit into the common region (measurement).
 * For example: If length is 5 and width is 3, then the square
 * which can fit into this region is 3 x 3. We would be left
 * with a surplus region of 2 x 3. Then a square of 2 x 2 will
 * fit in this region, and we will be left with a region of
 * 2 x 1. In this region, two squares of dimension 1 x 1 can
 * fit. So the possible squares are those with sides 3, 2, 1
 * @param lng is the length of the rectangle
 * @param wdth is the width of the rectangle
 * @return an array of all possible squares. If the initial
 * length and width are equal to each other, then an empty
 * arrary is returned.
 */
std::vector<int> SqInRect::sqInRect(int lng, int wdth) {
    std::vector<int> possibilities {};
    if (lng == wdth) return {};
    else {
        while(lng != wdth) {
            if (lng > wdth) {
                possibilities.push_back(wdth);
                lng -= wdth;
            } else {
                possibilities.push_back(lng);
                wdth -= lng;
            }
            if (lng == wdth) possibilities.push_back(lng);
        }
        return possibilities;
    }
}

int main() {
    for(auto &item : SqInRect::sqInRect(55, 777))
        std::cout <<  item << std::endl;
    return 0;
}
