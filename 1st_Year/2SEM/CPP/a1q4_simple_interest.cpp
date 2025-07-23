/*
 * Assignment No.: 01
 * Question No.: 04
 * Date: 25 March, 2025

 * Program Name: Simple Interest Calculator
 * Description: Computes simple interest with principal and duration as input, rate fixed at 6% per annum.

 * Author: Biranchi Kulesika
 * Date: 14 July, 2025
 */

#include <iostream>
using namespace std;

int main() {
    float principal, time, rate = 6, interest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter duration (in years): ";
    cin >> time;
    interest = (principal * rate * time) / 100;
    cout << "Simple Interest = " << interest << endl;
    return 0;
}
