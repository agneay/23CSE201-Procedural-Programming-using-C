// Program to check if a number is prime or not using function
// A function with arguments and NO return type
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

// Program written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// defining function prototype
void isPrime(int a);

int main()
{
    int a;
    printf("Enter the number you wish to check is prime or not: ");
    scanf("%d", &a);
    isPrime(a);
    return SUCCESS;
}

void isPrime(int a)
{
    bool res = true;
    if (a <= 1)
        res = false;
    for (int i = 2; i < sqrt(a); i++)
    {
        if (a % i == 0)
        {
            res = false;
        }
    }
    (res) ? printf("%d is a prime number\n", a) : printf("%d is not a prime number\n", a);
}