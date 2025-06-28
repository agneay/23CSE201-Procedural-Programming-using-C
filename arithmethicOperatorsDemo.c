// To demonstrate arithmetic operators in C
#include <stdio.h>
// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int main() {
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int a = 10, b = 5;
    int sum, difference, product, quotient, remainder;

    // Performing arithmetic operations
    sum = a + b;                // Addition
    difference = a - b;        // Subtraction
    product = a * b;           // Multiplication
    quotient = a / b;          // Division
    remainder = a % b;         // Modulus

    // Displaying the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}