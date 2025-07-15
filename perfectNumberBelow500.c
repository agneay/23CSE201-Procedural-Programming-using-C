#include <stdio.h>

#define SUCCESS 0

// Function to check if a number is perfect
int isPerfect(int num)
{
    int sum = 0;

    // Loop to find all proper divisors (excluding the number itself)
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return sum == num;
}

int main()
{
    printf("Perfect numbers below 500 are:\n");

    for (int i = 1; i < 500; i++)
    {
        if (isPerfect(i))
        {
            printf("%d\n", i);
        }
    }

    return SUCCESS;
}
