#include<stdio.h>
#include<stdlib.h>

// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE241O2

// To write a program making use of auto break and continue statements
int main() {
    int i;
    printf("This code was written by Agneay B Nair \n Roll No: CH.SC.U4CSE24102 \n");

    // Using auto to declare a variable
    auto int count = 0;

    // Loop from 0 to 9
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            // Break the loop when i is 5
            break;
        }
        if (i % 2 == 0) {
            // Skip even numbers
            continue;
        }
        count++;
        printf("Current odd number: %d\n", i);
    }

    printf("Total odd numbers counted before break: %d\n", count);
    return 0;
}