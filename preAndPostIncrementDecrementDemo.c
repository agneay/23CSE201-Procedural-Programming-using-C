// To demonstration of pre and post increment/decrement operators in C
#include <stdio.h>
int main() {
    int a = 5, b = 5;
    int preIncrement, postIncrement, preDecrement, postDecrement;

    // Pre-increment
    preIncrement = ++a; // a is incremented first, then assigned to preIncrement
    printf("Pre-increment: %d (a: %d)\n", preIncrement, a);

    // Post-increment
    postIncrement = b++; // b is assigned to postIncrement first, then incremented
    printf("Post-increment: %d (b: %d)\n", postIncrement, b);

    // Reset values for demonstration
    a = 5;
    b = 5;

    // Pre-decrement
    preDecrement = --a; // a is decremented first, then assigned to preDecrement
    printf("Pre-decrement: %d (a: %d)\n", preDecrement, a);

    // Post-decrement
    postDecrement = b--; // b is assigned to postDecrement first, then decremented
    printf("Post-decrement: %d (b: %d)\n", postDecrement, b);

    return 0;
}