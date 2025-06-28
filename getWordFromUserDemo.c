// To demonstrate how to get a word from the user and print it in c
#include <stdio.h>
#include <string.h>
#define MAX_WORD_LENGTH 100

// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main() {
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    char word[MAX_WORD_LENGTH];

    printf("Enter a word: ");
    // Using fgets to read a word from the user
    if (fgets(word, sizeof(word), stdin) != NULL) {
        // Remove the newline character if present
        size_t len = strlen(word);
        if (len > 0 && word[len - 1] == '\n') {
            word[len - 1] = '\0';
        }
        printf("You entered: %s\n", word);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}