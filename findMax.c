// To find the maximum number of the given two numbers
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Enter the first Number: ");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    if (a == b)
    {
        printf("Both %d and %d are of the same value \n", a, b);
    }
    else
    {
        if (a > b)
        {
            printf("The value of %d is greater than that of %d \n", a, b);
        }
        else
        {
            printf("The value of %d is greater than that of %d \n", b, a);
        }
    }
    return 0;
}