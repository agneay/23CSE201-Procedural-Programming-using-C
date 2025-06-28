// A program to demonstrate the use of continue, break, and if-else statements in a loop.
#include <stdio.h>

// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE241O2

int main() {
    printf("This code was written by Agneay B Nair \n Roll No: CH.SC.U4CSE24102");

    for (int i = 0; i < 10; i++) {
        if (i == 3) {
            printf("Skipping number %d using continue.\n", i);
            continue; // Skip the rest of the loop when i is 3
        } else if (i == 7) {
            printf("Breaking the loop at number %d using break.\n", i);
            break; // Exit the loop when i is 7
        } else {
            printf("Current number is %d.\n", i);
        }
    }
    return 0;
}