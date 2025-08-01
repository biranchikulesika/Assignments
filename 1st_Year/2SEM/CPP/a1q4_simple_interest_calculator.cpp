/*
* Description: Computes simple interest with principal and duration as input, rate fixed at 6% per annum.
* Author: Biranchi Kulesika
* Date: 25 March, 2025
* Assignment No.: 01
* Question No.: 04
*/

#include <iostream>

int main() {
    float principal, time, rate = 6.0, interest;
    std::cout << "Enter principal amount: ";
    std::cin >> principal;
    std::cout << "Enter duration (in years): ";
    std::cin >> time;
    interest = (principal * rate * time) / 100.0;
    std::cout << "Simple Interest = " << interest << std::endl;
    return 0;
}
