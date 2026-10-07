#include <stdio.h>

int main()
{
    int stock[10];
    int i, search, found = 0;

    printf("Enter stock count for 10 shelves:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Shelf %d: ", i + 1);
        scanf("%d", &stock[i]);
    }

    printf("\nStock levels in reverse order:\n");

    for(i = 9; i >= 0; i--)
    {
        printf("Shelf %d = %d\n", i + 1, stock[i]);
    }

    printf("\nEnter stock count to search: ");
    scanf("%d", &search);

    for(i = 0; i < 10; i++)
    {
        if(stock[i] == search)
        {
            printf("Stock count %d is found on Shelf %d.\n", search, i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Stock count not found.\n");
    }

    return 0;
}
