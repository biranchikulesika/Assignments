/**
 * @file a4q5_electricity_bill_calculator.c
 * @author Biranchi Kulesika
 * @date 23 Sep 2023
 * @brief Calculates an electricity bill based on a tiered tariff system.
 *
 * This program calculates a total electricity bill based on the number of
 * units consumed. The tariff is structured in slabs:
 * - First 50 units:    Rs. 0.50/unit
 * - Next 100 units:    Rs. 1.50/unit
 * - Next 100 units:    Rs. 4.50/unit
 * - Above 250 units:   Rs. 7.50/unit
 * An additional 20% surcharge is applied to the total base cost.
 */

#include <stdio.h>

int main()
{
  int consumed_units;
  double base_cost, surcharge_amount, total_bill;

  printf("Enter the total number of units consumed: ");
  if (scanf("%d", &consumed_units) != 1)
  {
    printf("Invalid input. Please enter a valid integer for units.\n");
    return 1;
  }

  if (consumed_units < 0)
  {
    printf("Consumed units cannot be negative. Please enter a positive value.\n");
    return 1;
  }

  if (consumed_units <= 50)
  {
    base_cost = consumed_units * 0.50;
  }
  else if (consumed_units <= 150)
  {
    base_cost = (50 * 0.50) + (consumed_units - 50) * 1.50;
  }
  else if (consumed_units <= 250)
  {
    base_cost = (50 * 0.50) + (100 * 1.50) + (consumed_units - 150) * 4.50;
  }
  else
  {
    base_cost = (50 * 0.50) + (100 * 1.50) + (100 * 4.50) + (consumed_units - 250) * 7.50;
  }

  surcharge_amount = base_cost * 0.20;
  total_bill = base_cost + surcharge_amount;

  printf("\n--- Electricity Bill Summary ---\n");
  printf("Units Consumed: %d\n", consumed_units);
  printf("--------------------------------\n");
  printf("Base Cost:          %10.2f\n", base_cost);
  printf("Surcharge (20%%):    %10.2f\n", surcharge_amount);
  printf("--------------------------------\n");
  printf("Total Bill Amount:  %10.2f\n", total_bill);
  printf("--------------------------------\n\n");

  return 0;
}
