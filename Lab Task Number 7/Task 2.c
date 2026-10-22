#include <stdio.h>
int main(void)
{
    int marks[6][4], subjectTotal[4] = {0}, i, j, total, best = 0;
    float subjectAverage[4], average;
    printf("Enter marks for 6 students in 4 subjects:\n");
    for (i = 0; i < 6; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            scanf("%d", &marks[i][j]);
            subjectTotal[j] += marks[i][j];
        }
    }
    printf("\nStudent Results:\n");
    for (i = 0; i < 6; i++) {
        total = 0;
        for (j = 0; j < 4; j++) total += marks[i][j];
        average = total / 4.0f;
        printf("Student %d: Total = %d, Average = %.2f\n", i + 1, total, average);
    }
    printf("\nSubject Class Averages:\n");
    for (j = 0; j < 4; j++) {
        subjectAverage[j] = subjectTotal[j] / 6.0f;
        printf("Subject %d: %.2f\n", j + 1, subjectAverage[j]);
        if (subjectAverage[j] > subjectAverage[best]) best = j;
    }
    printf("Best class performance: Subject %d (Average = %.2f)\n", best + 1, subjectAverage[best]);
    return 0;
}
