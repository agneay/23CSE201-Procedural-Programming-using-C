#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int n, x, sum = 0;
    printf("Enter the value for X: ");
    scanf("%d", &x);
    printf("Enter the value for n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += x * i;
    }
    printf("The sum of the series is : %d", sum);
}