// To check if a number is even or odd

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("%d number is even \n", n) : printf("%d number is odd \n", n);
    return 0;
}