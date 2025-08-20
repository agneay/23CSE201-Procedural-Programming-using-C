// Program to check if a number is prime or not using function
// A function without arguments but with return type
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

// Program written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// declaring global variable
int a;

// defining function prototype
bool isPrime();

int main()
{
    printf("Enter the number you wish to check is prime or not: ");
    scanf("%d", &a);

    bool res = isPrime(); // no arguments now
    (res) ? printf("%d is a prime number", a) : printf("%d is not a prime number", a);
    return SUCCESS;
}

bool isPrime()
{
    if (a <= 1)
        return false;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
