#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char titles[5][50], letter;
    int copies[5], i, j, vowels, mostCopies = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]", titles[i]);
        printf("Enter number of copies: ");
        scanf("%d", &copies[i]);
    }
    printf("\n===== LIBRARY CATALOG =====\n");
    printf("%-5s %-35s %s\n", "No.", "Title", "Copies");
    printf("----------------------------------------------------\n");
    for (i = 0; i < 5; i++) printf("%-5d %-35s %d\n", i + 1, titles[i], copies[i]);
    printf("\nVowel count in each title:\n");
    for (i = 0; i < 5; i++) {
        vowels = 0;
        for (j = 0; titles[i][j] != '\0'; j++) {
            char ch = (char)tolower((unsigned char)titles[i][j]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
        }
        printf("%s: %d vowels\n", titles[i], vowels);
        if (copies[i] > copies[mostCopies]) mostCopies = i;
    }
    printf("\nEnter a letter to search titles: ");
    scanf(" %c", &letter);
    letter = (char)tolower((unsigned char)letter);
    printf("Titles starting with '%c':\n", letter);
    for (i = 0; i < 5; i++)
        if (tolower((unsigned char)titles[i][0]) == letter) printf("%s\n", titles[i]);
    printf("\nTitle with the most copies: %s (%d copies)\n", titles[mostCopies], copies[mostCopies]);
    return 0;
}
