/*
* Description: Calculates the area of a circle by accepting the radius at runtime.
* Author: Biranchi Kulesika
* Date: 25 March, 2025
* Assignment No.: 01
* Question No.: 01
*/

#include <iostream>
#include <cmath> // For M_PI

int main() {
    double radius, area;
    std::cout << "Enter radius: ";
    std::cin >> radius;
    area = M_PI * radius * radius;
    std::cout << "Area of circle = " << area << std::endl;
    return 0;
}

