// Program to check if a number is prime or not using function
// A function with arguments and return type
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

// Program written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// defining function prototype
bool isPrime(int a);

int main()
{
    int a;
    printf("Enter the number you wish to check is prime or not: ");
    scanf("%d", &a);
    bool res = isPrime(a);
    (res) ? printf("%d is a prime number", a) : printf("%d is not a prime number", a);
    return SUCCESS;
}

bool isPrime(int a)
{
    if (a <= 1)
        return false;
    for (int i = 2; i < sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}