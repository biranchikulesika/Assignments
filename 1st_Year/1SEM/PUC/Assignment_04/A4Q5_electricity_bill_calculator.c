/*
* Description: A C program to calculate the electricity bill based on the given criteria:
* - First 50 units: ₹0.5 per unit
* - Next 100 units (51-150): ₹1.5 per unit
* - Next 100 units (151-250): ₹4.5 per unit
* - Above 250 units: ₹7.5 per unit
* A 20% surcharge is added to the total cost.
* Author: Biranchi Kulesika
* Date: 23 Sep, 2023
* Assignment No.: 04
* Question No.: 04
*/

#include <stdio.h>

int main() {
    int units;
    float cost, surcharge, final_bill;

    printf("Enter the total number of units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        cost = units * 0.5;
    } else if (units <= 150) {
        cost = 50 * 0.5 + (units - 50) * 1.5;
    } else if (units <= 250) {
        cost = 50 * 0.5 + 100 * 1.5 + (units - 150) * 4.5;
    } else {
        cost = 50 * 0.5 + 100 * 1.5 + 100 * 4.5 + (units - 250) * 7.5;
    }

    surcharge = 0.20 * cost;
    final_bill = cost + surcharge;

    printf("\nUnits Consumed: %d\n", units);
    printf("Cost before surcharge: %.2f\n", cost);
    printf("Surcharge (20%%): %.2f\n", surcharge);
    printf("Final Bill: %.2f\n", final_bill);

    return 0;
}
