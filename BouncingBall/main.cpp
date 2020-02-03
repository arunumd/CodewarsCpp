/**
 * @file main.cpp
 * @author Arun Kumar Devarajulu
 * @date February 2, 2020
 * @copyright Copyright 2020, Arun Kumar Devarajulu. All rights reserved
 */
#include <iostream>

/**
 * @brief Class for solving the problem of bouncing ball
 */
class Bouncingball {
public:
    /**
     * @brief Static member function to calculate the number of bounces made
     * by a ball after deprecation of height by bounce % in every turn
     * @param h is the height of the launch location
     * @param bounce is the deprecation factor
     * @param window is the height of the observer
     * @return total number of bounces as an integer
     */
    static int bouncingBall(double h, double bounce, double window);
};

int Bouncingball::bouncingBall(double h, double bounce, double window) {
    if(h > 0 && 0 < bounce && bounce < 1 && window < h) {
        int total_bounces = 1;
        h *= bounce;
        while(h > window) {
            total_bounces += 2;
            h *= bounce;
        }
        return total_bounces;
    } else return -1;
}

int main() {
    std::cout << Bouncingball::bouncingBall(77, 0.83, 13) << std::endl;
    return 0;
}
