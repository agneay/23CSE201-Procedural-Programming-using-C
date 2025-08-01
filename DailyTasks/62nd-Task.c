#include <stdio.h>
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int marks[5][3], total[5] = {0}, topper = 0;
    float avg[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        avg[i] = total[i] / 3.0;
        if (total[i] > total[topper])
            topper = i;
    }
    printf("Topper: Student %d with Avg %.2f\n", topper + 1, avg[topper]);
    return 0;
}
