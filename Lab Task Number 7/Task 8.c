#include <stdio.h>
int main(void)
{
    int stock[3][4][5], b, s, slot, buildingTotal, shelfTotal;
    int fullestBuilding = 0, fullestShelf = 0, highestShelfTotal = -1;
    printf("Enter stock counts for 3 buildings, 4 shelves, 5 slots each:\n");
    for (b = 0; b < 3; b++) for (s = 0; s < 4; s++) {
        printf("Building %d, Shelf %d: ", b + 1, s + 1);
        for (slot = 0; slot < 5; slot++) scanf("%d", &stock[b][s][slot]);
    }
    printf("\nTotal stock per building:\n");
    for (b = 0; b < 3; b++) {
        buildingTotal = 0;
        for (s = 0; s < 4; s++) {
            shelfTotal = 0;
            for (slot = 0; slot < 5; slot++) {
                shelfTotal += stock[b][s][slot];
                if (stock[b][s][slot] < 5)
                    printf("Needs restock: [%d][%d][%d] has %d items\n", b, s, slot, stock[b][s][slot]);
            }
            if (shelfTotal > highestShelfTotal) {
                highestShelfTotal = shelfTotal;
                fullestBuilding = b;
                fullestShelf = s;
            }
            buildingTotal += shelfTotal;
        }
        printf("Building %d: %d items\n", b + 1, buildingTotal);
    }
    printf("\nFullest shelf: Building %d, Shelf %d (Total = %d)\n",
           fullestBuilding + 1, fullestShelf + 1, highestShelfTotal);
    return 0;
}
