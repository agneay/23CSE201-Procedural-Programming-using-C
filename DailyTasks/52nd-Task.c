#include <stdio.h>
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int arr[] = {10, 12, 16, 4, 8}, max = arr[0];
    for (int i = 1; i < 5; i++)
        if (arr[i] > max)
            max = arr[i];
    printf("Largest: %d\n", max);
    return 0;
}
