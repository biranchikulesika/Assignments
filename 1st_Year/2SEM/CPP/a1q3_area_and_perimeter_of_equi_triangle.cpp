/*
 * Assignment No.: 01
 * Question No.: 03
 * Date: 25 March, 2025

 * Program Name: Area & Perimeter of Equilateral Triangle
 * Description: Calculates perimeter and area of an equilateral triangle using side value at runtime.

 * Author: Biranchi Kulesika
 * Date: 14 July, 2025
 */

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    float side, area, perimeter;
    cout << "Enter side: ";
    cin >> side;
    perimeter = 3 * side;
    area = (sqrt(3)/4) * side * side;
    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
    return 0;
}
