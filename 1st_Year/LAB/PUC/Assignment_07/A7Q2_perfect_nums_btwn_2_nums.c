#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i * 2 <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return sum == num;
}

int main()
{
    int num1, num2, temp;

    printf("\nEnter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 < 0 || num1 > 100000 || num2 < 0 || num2 > 100000)
    {
        printf("Numbers can not be less than 1 or exceed 100000. Try again..");
        return 0;
    }

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("\nPerfect numbers between %d and %d:\n", num1, num2);
    int found = 0;
    for (int i = num1; i <= num2; i++)
    {
        if (isPerfect(i))
        {
            printf("%d", i);
            printf("\n");
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("No perfect numbers found in the given range!!!\n");
    }

    printf("\n=======Code execution completed=======");

    return 0;
}
