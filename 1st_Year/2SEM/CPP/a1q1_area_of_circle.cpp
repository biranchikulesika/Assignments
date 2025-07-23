/*
 * Assignment No.: 01
 * Question No.: 1
 * Date: 25 March, 2025
 *
 * Program Name: Area of Circle
 * Description: Calculates the area of a circle by accepting the radius at runtime.

 * Author: Biranchi Kulesika
 * Date: 14 July, 2025
 */

#include <iostream>
using namespace std;

int main()
{
	float radius, area;
	cout << "Enter radius: ";
	cin >> radius;
	area = 3.14159 * radius * radius;
	cout << "Area of circle = " << area << endl;
	return 0;
}
