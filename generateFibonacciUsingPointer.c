#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

/*
Program written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/

// Defining function prototype
void generateFibonacci(int *first, int *second, int *next);

int main()
{
    int first = 0;
    int second = 1;
    int next;
    generateFibonacci(&first, &second, &next);
    return SUCCESS;
}

void generateFibonacci(int *first, int *second, int *next)
{
    int num;
    printf("Enter the limit for generating fibonacci sequence: ");
    scanf("%d", &num);
    printf("%d %d ", *first, *second);
    for (int i = 0; i < num; i++)
    {
        *next = *first + *second;
        printf("%d ", *next);

        *first = *second;
        *second = *next;
    }
    printf("\n");
}