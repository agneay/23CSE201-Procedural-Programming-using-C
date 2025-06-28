// Program  to demonstrate fgets and puts functions
#include <stdio.h>
int main() {
    char buffer[100];

    // Prompt the user for input
    printf("Enter a string: ");
    
    // Read a line of input from the user
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // Output the string using puts
        puts("You entered:");
        puts(buffer);
    } else {
        puts("Error reading input.");
    }

    return 0;
}