#include <stdio.h>
#include <stdlib.h>

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// Recursive function to calculate nth Fibonacci number
int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers are:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}
