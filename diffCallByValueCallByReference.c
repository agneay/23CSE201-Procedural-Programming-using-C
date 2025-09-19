#include <stdio.h>

/*
Program was written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/

// Function using Call by Value
void callByValue(int x)
{
    x = 50; // modifies only the copy
    printf("Inside callByValue function: x = %d\n", x);
}

// Function using Call by Reference
void callByReference(int *x)
{
    *x = 100; // modifies the original variable
    printf("Inside callByReference function: *x = %d\n", *x);
}

int main()
{
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int a = 10, b = 20;

    printf("Before callByValue: a = %d\n", a);
    callByValue(a);
    printf("After callByValue: a = %d\n\n", a); // remains unchanged

    printf("Before callByReference: b = %d\n", b);
    callByReference(&b);
    printf("After callByReference: b = %d\n", b); // gets modified

    return 0;
}
