// Print a sentence from user using fgets
#include <stdio.h>
#include <stdlib.h>
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int main() {
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    char sentence[100];

    printf("Enter a sentence: ");
    // Using fgets to read a line of text
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        printf("You entered: %s", sentence);
    } else {
        fprintf(stderr, "Error reading input.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}