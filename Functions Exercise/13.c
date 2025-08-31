#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

/* Write a recursive C function to calculate the sum of digits of a number.
 Use this function in main to accept a number and print sum of its digits.*/

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int sumOfDigits(int n)
{
    int dummy = n;
    int sum = 0;
    int digit = 0;
    while (dummy != 0)
    {
        digit = dummy % 10;
        sum += digit;
        dummy /= 10;
    }
    return sum;
}

int recursiveSumOfDigits(int n)
{
    if (n == 0)
        return 0;
    int digit = n % 10;
    return digit + recursiveSumOfDigits(n / 10);
}

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits (iterative): %d\n", sumOfDigits(num));
    printf("Sum of digits (recursive): %d\n", recursiveSumOfDigits(num));
    return SUCCESS;
}