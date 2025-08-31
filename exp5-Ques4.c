#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Prototype Declaration
void display(int arr[], int size);
bool isPrime(int n);

int main()
{
    // Program written by Agneay B Nair
    // Roll NO: CH.SC.U4CSE24102
    printf("Program written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");

    int n;
    printf("Enter the Limit for which you wish to enter numbers: ");
    scanf("%d", &n);

    int prime[n];
    int arr[n];
    int top = -1;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i + 1);
        scanf("%d", arr + i);

        if (isPrime(arr[i]))
            prime[++top] = arr[i];
    }

    printf("The prime numbers are: ");
    if (top >= 0)
        display(prime, top + 1);
    else
        printf("None\n");

    return SUCCESS;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
