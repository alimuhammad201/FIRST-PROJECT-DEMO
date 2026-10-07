#include <stdio.h>

int main()
{
    char username[21];
    int i, vowels = 0, consonants = 0;

    printf("Enter username: ");
    scanf("%20s", username);

    for(i = 0; username[i] != '\0'; i++)
    {
        if
		(username[i] == 'a' || username[i] == 'e' ||
           username[i] == 'i' || username[i] == 'o' ||
           username[i] == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }

        if(username[i] >= 'a' && username[i] <= 'z')
        {
            username[i] = username[i] - 32;
        }
    }

    printf("\nNumber of vowels = %d", vowels);
    printf("\nNumber of consonants = %d", consonants);
    printf("\nUsername in uppercase = %s", username);

    return 0;
}
