/*
* Description: Finds the roots of ax² + bx + c = 0 using runtime input for a, b, and c.
* Author: Biranchi Kulesika
* Date: 25 March, 2025
* Assignment No.: 01
* Question No.: 02
*/

#include <iostream>
#include <cmath>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and different.\n";
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        std::cout << "Roots are real and equal.\n";
        std::cout << "Root 1 = Root 2 = " << root1 << std::endl;
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex and different.\n";
        std::cout << "Root 1 = " << realPart << " + " << imagPart << "i" << std::endl;
        std::cout << "Root 2 = " << realPart << " - " << imagPart << "i" << std::endl;
    }

    return 0;
}

