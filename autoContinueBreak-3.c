//A program which demonstrates the use of the auto keyword in a function with a break statement.
#include <stdio.h>

// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE241O2

void main() {
    printf("This code was written by Agneay B Nair \n Roll No: CH.SC.U4CSE24102");

    int i = 0;
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            printf("Breaking at i = %d\n", i);
            break; // Breaks the loop when i is 5
        }
        printf("Current value of i: %d\n", i);
    }
    printf("Loop exited with i = %d\n", i);
}