
#include <stdio.h>

float calculateBill(int units)
{
    float bill;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + (units - 100) * 15;
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    bill = bill + 150;

    return bill;
}

void printBill(int units, float bill)
{
    printf("\nUnits Consumed: %d", units);
    printf("\nTotal Bill: Rs. %.2f\n", bill);
}

int main()
{
    int units, i;
    float bill;

    for (i = 1; i <= 3; i++)
    {
        printf("\nCustomer %d\n", i);
        printf("Enter units: ");
        scanf("%d", &units);

        bill = calculateBill(units);
        printBill(units, bill);
    }

    return 0;
}

