#include <stdio.h>
int main() {
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int i = 0, j = 0;
    for (int k = 0; k < 5; k++) {
        i = i + 1;
        j = j + 2;
        printf("Iteration %d: i = %d, j = %d\n", k+1, i, j);
    }
    return 0;
}