#include <stdio.h>
int main(void)
{
    int seats[5][8], i, j, freeSeats, totalFree = 0;
    printf("Enter seat status (0 = empty, 1 = booked):\n");
    for (i = 0; i < 5; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < 8; j++) scanf("%d", &seats[i][j]);
    }
    printf("\nSeating Map:\n    ");
    for (j = 0; j < 8; j++) printf("%d ", j + 1);
    printf("\n");
    for (i = 0; i < 5; i++) {
        freeSeats = 0;
        printf("R%d: ", i + 1);
        for (j = 0; j < 8; j++) {
            if (seats[i][j] == 0) { printf(". "); freeSeats++; }
            else printf("X ");
        }
        printf(" Free seats: %d\n", freeSeats);
        totalFree += freeSeats;
    }
    printf("Total free seats: %d\n", totalFree);
    return 0;
}
