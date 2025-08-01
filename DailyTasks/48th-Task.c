#include <stdio.h>
#define MAX 10
int main()
{

    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int arr[MAX];
    int i;
    for (i = 0; i < MAX; i++)
    {
        if (i == 5)
            continue; // Skip index 5
        if (i == 8)
            break; // Stop at index 8
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    if (i < MAX)
        goto end; // Jump to end if break occurs
end:
    printf("\nProgram ended using goto.\n");
    return 0;
}
