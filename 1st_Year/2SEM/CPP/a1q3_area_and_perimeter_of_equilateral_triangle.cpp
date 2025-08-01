/*
* Description: Calculates perimeter and area of an equilateral triangle using side value at runtime.
* Author: Biranchi Kulesika
* Date: 25 March, 2025
* Assignment No.: 01
* Question No.: 03
*/

#include <iostream>
#include <cmath>

int main() {
    double side, area, perimeter;
    std::cout << "Enter side: ";
    std::cin >> side;
    perimeter = 3 * side;
    area = (sqrt(3.0) / 4.0) * side * side;
    std::cout << "Perimeter = " << perimeter << std::endl;
    std::cout << "Area = " << area << std::endl;
    return 0;
}

