#include <stdio.h>
int main(void)
{
    int rooms[4][6], i, j, vacant, mostVacant = -1, bestFloor = 0, found = 0;
    printf("Enter room status (1 = occupied, 0 = vacant):\n");
    for (i = 0; i < 4; i++) {
        printf("Floor %d: ", i + 1);
        for (j = 0; j < 6; j++) scanf("%d", &rooms[i][j]);
    }
    for (i = 0; i < 4; i++) {
        vacant = 0;
        for (j = 0; j < 6; j++) if (rooms[i][j] == 0) vacant++;
        printf("Floor %d vacancies: %d\n", i + 1, vacant);
        if (vacant > mostVacant) { mostVacant = vacant; bestFloor = i; }
    }
    printf("Floor with most vacancies: Floor %d (%d vacant rooms)\n", bestFloor + 1, mostVacant);
    for (i = 0; i < 4 && !found; i++) {
        int count = 0;
        for (j = 0; j < 6; j++) {
            if (rooms[i][j] == 0) count++;
            else count = 0;
            if (count >= 3) {
                printf("Floor %d has 3 consecutive vacant rooms starting at room %d.\n", i + 1, j - 1);
                found = 1;
                break;
            }
        }
    }
    if (!found) printf("No floor has 3 consecutive vacant rooms.\n");
    return 0;
}
