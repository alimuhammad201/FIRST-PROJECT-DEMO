#include <stdio.h>

int main()
{
    int temp[8];
    int i;
    int hottest, coldest, second;

    printf("Enter temperature for 8 hours:\n");

    for(i = 0; i < 8; i++)
    {
        printf("Enter temperature %d: ", i + 1);
        scanf("%d", &temp[i]);
    }

    hottest = temp[0];
    coldest = temp[0];
    second = temp[0];

    for(i = 1; i < 8; i++)
    {
        if(temp[i] > hottest)
        {
            second = hottest;
            hottest = temp[i];
        }
        else if(temp[i] > second && temp[i] != hottest)
        {
            second = temp[i];
        }

        if(temp[i] < coldest)
        {
            coldest = temp[i];
        }
    }

    printf("Hottest temperature = %d C\n", hottest);
    printf("Coldest temperature = %d C\n", coldest);
    printf("Second-hottest temperature = %d C\n", second);

    return 0;
}
