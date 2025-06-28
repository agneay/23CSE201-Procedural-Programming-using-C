// To demonstrate how to get a character from the user and print it in C
#include <stdio.h>
#include <stdlib.h>
// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int main() {
    char c;
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    // Prompt the user for a character
    printf("Please enter a character: ");
    
    // Read a single character from standard input
    c = getchar();

    // Print the character back to the user
    printf("You entered: '%c'\n", c);

    // Clear the input buffer to avoid any leftover characters
    while (getchar() != '\n');

    return 0;
}