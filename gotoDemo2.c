//Program for jumping out of nested loop using goto
#include <stdio.h>
int main() {
    // This program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE241O2
    int i, j;

    printf("This code was written by Agneay B Nair \n Roll No: CH.SC.U4CSE24102");


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 2 && j == 2) {
                goto end; // Jump out of both loops
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }

end:
    printf("Exited the nested loops.\n");
    return 0;
}