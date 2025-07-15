#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int x, n;
    printf("Enter the value for X: ");
    scanf("%d", &x);
    printf("Enter the value for n: ");
    scanf("%d", &n);
    printf("The %d^%d is %lf", x, n, pow(x, n));
    return SUCCESS;
}