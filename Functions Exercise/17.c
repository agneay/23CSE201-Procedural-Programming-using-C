#include <stdio.h>
#include <stdlib.h>

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// Function to calculate sum of digits (recursive)
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

// Function to reduce to a single digit (recursive)
int digitalRoot(int n)
{
    if (n < 10) // base case: already a single digit
        return n;
    return digitalRoot(sumOfDigits(n)); // keep reducing
}

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The single digit sum is: %d\n", digitalRoot(num));

    return 0;
}
