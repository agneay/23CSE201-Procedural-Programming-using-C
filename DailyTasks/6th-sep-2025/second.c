#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main()
{
    int a = 10;
    int b = 20;
    printf("The value of a and b is %d and %d before swapping", a, b);
    swap(&a, &b);
    printf("The value of a and b is %d and %d after swapping", a, b);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}