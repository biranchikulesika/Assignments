/*
 * Assignment No.: 01
 * Question No.: 02
 * Date: 25 March, 2025
 *
 * Program Name: Roots of Quadratic Equation
 * Description: Finds the roots of ax² + bx + c = 0 using runtime input for a, b, and c.

 * Author: Biranchi Kulesika
 * Date: 14 July, 2025
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, d, root1, root2;
	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		root1 = (-b + sqrt(d)) / (2 * a);
		root2 = (-b - sqrt(d)) / (2 * a);
		cout << "Roots are real: " << root1 << " and " << root2 << endl;
	}
	else if (d == 0)
	{
		root1 = -b / (2 * a);
		cout << "Roots are equal: " << root1 << endl;

	}
	else
	{
		cout << "Roots are imaginary." << endl;
	}
	return 0;
}
