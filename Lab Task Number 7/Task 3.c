#include <stdio.h>
int main(void)
{
    int temp[7][4], i, j, hotDay = 0, hotTime = 0, coldDay = 0, coldTime = 0, noonTotal = 0;
    char *days[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    char *times[4] = {"Morning","Noon","Evening","Night"};
    float noonAverage;
    printf("Enter temperatures for each day: morning, noon, evening, night.\n");
    for (i = 0; i < 7; i++) {
        printf("%s: ", days[i]);
        for (j = 0; j < 4; j++) {
            scanf("%d", &temp[i][j]);
            if (j == 1) noonTotal += temp[i][j];
        }
    }
    for (i = 0; i < 7; i++) for (j = 0; j < 4; j++) {
        if (temp[i][j] > temp[hotDay][hotTime]) { hotDay = i; hotTime = j; }
        if (temp[i][j] < temp[coldDay][coldTime]) { coldDay = i; coldTime = j; }
    }
    noonAverage = noonTotal / 7.0f;
    printf("\nHottest: %d C on %s (%s)\n", temp[hotDay][hotTime], days[hotDay], times[hotTime]);
    printf("Coldest: %d C on %s (%s)\n", temp[coldDay][coldTime], days[coldDay], times[coldTime]);
    printf("Weekly noon average: %.2f C\n", noonAverage);
    printf("Days with noon temperature above average:\n");
    for (i = 0; i < 7; i++) if (temp[i][1] > noonAverage) printf("%s: %d C\n", days[i], temp[i][1]);
    return 0;
}
