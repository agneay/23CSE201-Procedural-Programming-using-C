#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false; // 0 and 1 are not prime numbers
    if (num == 2)
        return true; // 2 is prime
    if (num % 2 == 0)
        return false; // Even numbers > 2 are not prime

    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int start, end;
    // Program Written by Agneay B Nair
    printf("The program is written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    // Input range from user
    printf("Enter the start of range: ");
    scanf("%d", &start);
    printf("Enter the end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
