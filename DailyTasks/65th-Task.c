#include <stdio.h>
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int temp[7][3];
    float avg[7];
    int hottest = 0;
    for (int i = 0; i < 7; i++)
    {
        printf("Day %d temps (Morning Afternoon Evening): ", i + 1);
        avg[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &temp[i][j]);
            avg[i] += temp[i][j];
        }
        avg[i] /= 3.0;
        if (avg[i] > avg[hottest])
            hottest = i;
    }
    printf("Hottest Day: %d with Avg %.2f\n", hottest + 1, avg[hottest]);
    return 0;
}
