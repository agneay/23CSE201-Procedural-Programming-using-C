#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void increment(int *a);
int main()
{
    int a = 10;
    printf("Before incrementing a value is %d", a);
    increment(&a);
    printf("After incrementing a value is %d", a);
}

void increment(int *a)
{
    (*a)++;
}