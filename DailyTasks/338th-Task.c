#include <stdio.h>
int i = 10; // Global variable
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    printf("Global i before loop: %d\n", i);
    for (int i = 0; i < 3; i++)
    { // Local i inside loop
        printf("Local i inside loop: %d\n", i);
    }
    printf("Global i after loop: %d\n", i);
    return 0;
}
