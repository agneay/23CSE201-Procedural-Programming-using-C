// Program to check if a number is prime or not using function
// A function without arguments and without return type
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

// Program written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// function prototype
void isPrime();

int main()
{
    isPrime(); // no arguments, no return value
    return SUCCESS;
}

void isPrime()
{
    int a;
    printf("Enter the number you wish to check is prime or not: ");
    scanf("%d", &a);

    if (a <= 1)
    {
        printf("%d is not a prime number\n", a);
        return;
    }

    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            printf("%d is not a prime number\n", a);
            return;
        }
    }

    printf("%d is a prime number\n", a);
}
