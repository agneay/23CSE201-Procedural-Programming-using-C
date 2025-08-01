#include <stdio.h>
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int arr[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}};
    for (int i = 0; i < 5; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 5; j++)
            rowSum += arr[i][j];
        printf("Row %d sum: %d\n", i + 1, rowSum);
    }
    for (int j = 0; j < 5; j++)
    {
        int colSum = 0;
        for (int i = 0; i < 5; i++)
            colSum += arr[i][j];
        printf("Col %d sum: %d\n", j + 1, colSum);
    }
    return 0;
}
