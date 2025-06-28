#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(int num);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    bool res = checkPrime(num);
    (res) ? printf("%d is prime \n", num) : printf("%d is not prime \n", num);
}

bool checkPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; pow(i, 2) <= num; i++)
    {
        if (i % num == 0)
            return false;
    }
    return true;
}