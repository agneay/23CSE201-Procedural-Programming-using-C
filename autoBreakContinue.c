#include<stdio.h>
#include<stdlib.h>

// To write a program making use of auto break and continue statements
int main() {
    int i;

    // Using auto to declare a variable
    auto int count = 0;

    // Loop from 0 to 9
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            // Break the loop when i is 5
            break;
        }
        if (i % 2 == 0) {
            // Skip even numbers
            continue;
        }
        count++;
        printf("Current odd number: %d\n", i);
    }

    printf("Total odd numbers counted before break: %d\n", count);
    return 0;
}