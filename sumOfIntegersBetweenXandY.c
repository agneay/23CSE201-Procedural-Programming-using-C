#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int x, y;
    printf("Enter the value of X: ");
    scanf("%d", &x);
    printf("Enter the value of Y: ");
    scanf("%d", &y);
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int count = 0;
    for (int i = x; i <= y; i++)
    {
        count += i;
    }
    printf("The sum of numbers between %d and %d is: %d", x, y, count);
    return SUCCESS;
}