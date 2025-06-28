// Print a sentence from user limiting the size of fgets to 10
#include <stdio.h>
#include <string.h>
// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int main() {
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    char sentence[11]; // 10 characters + 1 for null terminator
    printf("Enter a sentence (max 10 characters): ");
    
    // Read input with a limit of 10 characters
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        // Remove the newline character if present
        size_t len = strlen(sentence);
        if (len > 0 && sentence[len - 1] == '\n') {
            sentence[len - 1] = '\0';
        }
        printf("You entered: %s\n", sentence);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}