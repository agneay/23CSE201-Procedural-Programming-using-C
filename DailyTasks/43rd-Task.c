#include <stdio.h>
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int num = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
