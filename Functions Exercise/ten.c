#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

int isPrime(int x);
// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    for (int i = 1; i < 10; i++)
    {
        (isPrime(i)) ? printf("%d is a prime number", i) : printf("%d is not a prime number", i);
    }
    return SUCCESS;
}

int isPrime(int x)
{
    if (x <= 1)
        return 0; // not prime
    if (x == 2)
        return 1; // 2 is prime
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}