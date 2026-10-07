#include <stdio.h>

int main()
{
    int water, hours = 0;
    printf("Enter the water level: ");
    scanf("%d", &water);

    printf("Water level: %d liters\n", water);

    while(water != 1)
    {
        if(water % 2 == 0)
        {
            water = water / 2;
        }
        else
        {
            water = 3 * water + 1;
        }

        hours++;
		printf("Water level: %d liters\n", water);
    }

    printf("Total hours = %d", hours);
    return 0;
}
