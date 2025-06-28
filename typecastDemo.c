// To demonstration of type casting in C
#include <stdio.h>
// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int main() {
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int a = 5;
    double b = 2.0;

    // Implicit type casting (int to double)
    double result1 = a / b; // a is promoted to double
    printf("Implicit type casting: %f\n", result1);

    // Explicit type casting (double to int)
    int result2 = (int)b; // b is cast to int
    printf("Explicit type casting: %d\n", result2);

    // Type casting in arithmetic operations
    int c = 10;
    double result3 = (double)c / 3; // c is cast to double
    printf("Type casting in arithmetic: %f\n", result3);

    return 0;
}