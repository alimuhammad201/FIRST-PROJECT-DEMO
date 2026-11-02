
#include <stdio.h>

long factorial(int n)
{
    int i;
    long fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int reverseNumber(int n)
{
    int rem, rev = 0;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return rev;
}

int isPalindrome(int n)
{
    if (n == reverseNumber(n))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int sumOfDigits(int n)
{
    int rem, sum = 0;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    return sum;
}

void printFibonacci(int terms)
{
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: ");

    for (i = 1; i <= terms; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}

int main()
{
    int choice, n;

    do
    {
        printf("\n----- Number Utility Toolkit -----\n");
        printf("1. Factorial\n");
        printf("2. Reverse Number\n");
        printf("3. Check Palindrome\n");
        printf("4. Sum of Digits\n");
        printf("5. Fibonacci Series\n");
        printf("6. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number: ");
                scanf("%d", &n);

                if (n < 0)
                {
                    printf("Factorial is not defined for negative numbers.\n");
                }
                else
                {
                    printf("Factorial: %ld\n", factorial(n));
                }
                break;

            case 2:
                printf("Enter number: ");
                scanf("%d", &n);

                printf("Reversed number: %d\n", reverseNumber(n));
                break;

            case 3:
                printf("Enter number: ");
                scanf("%d", &n);

                if (n >= 0 && isPalindrome(n) == 1)
                {
                    printf("%d is a palindrome.\n", n);
                }
                else
                {
                    printf("%d is not a palindrome.\n", n);
                }
                break;

            case 4:
                printf("Enter number: ");
                scanf("%d", &n);

                printf("Sum of digits: %d\n", sumOfDigits(n));
                break;

            case 5:
                printf("Enter number of terms: ");
                scanf("%d", &n);

                if (n > 0)
                {
                    printFibonacci(n);
                }
                else
                {
                    printf("Enter a positive number of terms.\n");
                }
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    }
    while (choice != 6);

    return 0;
}

