#include <stdio.h>
int main(void)
{
    int marks[3][4][5], d, s, sub, total, fail, topper;
    float deptAverage[3], bestAverage, studentAverage, deptTotal;
    int bestDepartment = 0;
    printf("Enter marks for 3 departments, 4 students each, 5 subjects each:\n");
    for (d = 0; d < 3; d++) {
        printf("\nDepartment %d:\n", d + 1);
        for (s = 0; s < 4; s++) {
            printf("Student %d: ", s + 1);
            for (sub = 0; sub < 5; sub++) scanf("%d", &marks[d][s][sub]);
        }
    }
    printf("\n===== STUDENT RESULTS =====\n");
    for (d = 0; d < 3; d++) {
        bestAverage = -1;
        topper = 0;
        deptTotal = 0;
        for (s = 0; s < 4; s++) {
            total = 0; fail = 0;
            for (sub = 0; sub < 5; sub++) {
                total += marks[d][s][sub];
                if (marks[d][s][sub] < 40) fail = 1;
            }
            studentAverage = total / 5.0f;
            deptTotal += studentAverage;
            printf("Department %d, Student %d: Average = %.2f", d + 1, s + 1, studentAverage);
            if (fail) printf(" FAIL");
            printf("\n");
            if (studentAverage > bestAverage) { bestAverage = studentAverage; topper = s; }
        }
        deptAverage[d] = deptTotal / 4.0f;
        printf("Topper of Department %d: Student %d (Average = %.2f)\n", d + 1, topper + 1, bestAverage);
    }
    for (d = 1; d < 3; d++) if (deptAverage[d] > deptAverage[bestDepartment]) bestDepartment = d;
    printf("\nDepartment with highest overall average: Department %d (%.2f)\n",
           bestDepartment + 1, deptAverage[bestDepartment]);
    return 0;
}
