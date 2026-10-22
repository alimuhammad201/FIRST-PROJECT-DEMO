#include <stdio.h>
int main(void)
{
    int sales[3][5], branchTotal[3] = {0}, productTotal[5] = {0};
    int i, j, bestBranch = 0, lowestProduct = 0;
    printf("Enter sales for 3 branches and 5 products:\n");
    for (i = 0; i < 3; i++) {
        printf("Branch %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &sales[i][j]);
            branchTotal[i] += sales[i][j];
            productTotal[j] += sales[i][j];
        }
    }
    printf("\nBranch totals:\n");
    for (i = 0; i < 3; i++) {
        printf("Branch %d: %d\n", i + 1, branchTotal[i]);
        if (branchTotal[i] > branchTotal[bestBranch]) bestBranch = i;
    }
    printf("\nProduct totals:\n");
    for (j = 0; j < 5; j++) {
        printf("Product %d: %d\n", j + 1, productTotal[j]);
        if (productTotal[j] < productTotal[lowestProduct]) lowestProduct = j;
    }
    printf("Best-selling branch: Branch %d (%d)\n", bestBranch + 1, branchTotal[bestBranch]);
    printf("Product with lowest sales: Product %d (%d)\n", lowestProduct + 1, productTotal[lowestProduct]);
    return 0;
}
