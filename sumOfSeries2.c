#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int x, n;
    printf("Enter the value for X: ");
    scanf("%d", &x);
    printf("Enter the value for n: ");
    scanf("%d", &n);
    double sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += pow(x, i);
    }
    printf("The sum is %lf", sum);
    return SUCCESS;
}