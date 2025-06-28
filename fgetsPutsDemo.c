//To demonstrate fgets and puts functions
#include <stdio.h>
// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int main() {
    char buffer[100];
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");


    // Using fgets to read a line from standard input
    printf("Enter a line of text: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // Using puts to print the line read
        puts("You entered:");
        puts(buffer);
    } else {
        puts("Error reading input.");
    }

    return 0;
}