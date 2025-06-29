#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if character is a digit
    if (ch >= 48 && ch <= 57) {
        printf("The character is a Digit.\n");
    }
    // Check if character is an uppercase letter
    else if (ch >= 65 && ch <= 90) {
        printf("The character is an Uppercase Alphabet.\n");
    }
    // Check if character is a lowercase letter
    else if (ch >= 97 && ch <= 122) {
        printf("The character is a Lowercase Alphabet.\n");
    }
    // If none of the above
    else {
        printf("The character is neither a Digit nor an Alphabet.\n");
    }

    return 0;
}
