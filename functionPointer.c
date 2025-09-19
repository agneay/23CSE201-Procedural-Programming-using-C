#include <stdio.h>

/*
Program was written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/

// Define two functions
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}

// Function that accepts a function pointer
void runFunc(int (*operation)(int, int), int x, int y)
{
    int result = operation(x, y); // call function through pointer
    printf("Result: %d\n", result);
}

int main()
{
    printf("The program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102");
    // Declare a function pointer
    int (*funcPtr)(int, int);

    // Point to add function
    funcPtr = add;
    printf("Calling add(10, 5): ");
    runFunc(funcPtr, 10, 5);

    // Point to subtract function
    funcPtr = subtract;
    printf("Calling subtract(10, 5): ");
    runFunc(funcPtr, 10, 5);

    return 0;
}
