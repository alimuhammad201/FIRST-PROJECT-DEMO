
#include <stdio.h>

int findTotal(int marks[], int size)
{
    int i, total = 0;

    for (i = 0; i < size; i++)
    {
        total = total + marks[i];
    }

    return total;
}

float findPercentage(int total, int size)
{
    return (float)total / (size * 100) * 100;
}

char findGrade(float percentage)
{
    if (percentage >= 80)
    {
        return 'A';
    }
    else if (percentage >= 60)
    {
        return 'B';
    }
    else if (percentage >= 40)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}

int findMax(int marks[], int size)
{
    int i, max = marks[0];

    for (i = 1; i < size; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
    }

    return max;
}

int findMin(int marks[], int size)
{
    int i, min = marks[0];

    for (i = 1; i < size; i++)
    {
        if (marks[i] < min)
        {
            min = marks[i];
        }
    }

    return min;
}

void printReport(int marks[], int size)
{
    int total;

    float percentage;
    char grade;

    total = findTotal(marks, size);
    percentage = findPercentage(total, size);
    grade = findGrade(percentage);

    printf("\n----- Student Report Card -----\n");

    printf("Total: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("Highest: %d\n", findMax(marks, size));
    printf("Lowest: %d\n", findMin(marks, size));
}

int main()
{
    int marks[5], i;

    printf("Enter 5 marks: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    printReport(marks, 5);

    return 0;
}

