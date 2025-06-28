#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    printf("The ASCII character of %c is %d \n", ch, ch);
}