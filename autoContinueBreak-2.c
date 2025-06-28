// To demonstration of auto continue and break in a loop
#include <stdio.h>

// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE241O2g

int main() {

    printf("This code was written by Agneay B Nair \n Roll No: CH.SC.U4CSE24102");

    auto int i = 0;

    // Loop that will continue until i is less than 10
    while (i < 10) {
        i++;
        printf("Current value of i: %d\n", i);

        if(i == 4){
            continue; // Skip the rest of the loop when i is 4
        }
        // If i is equal to 5, break the loop
        if (i == 5) {
            printf("Breaking the loop at i = %d\n", i);
            break;
        }
    }

    printf("Loop ended with i = %d\n", i);
    return 0;
}