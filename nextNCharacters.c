#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    char n;
    printf("Enter the character: ");
    scanf(" %c", &n);
    int num;
    printf("Enter the value for n: ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        printf("%c \n", n + i);
    }
    return SUCCESS;
}