#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

/*
Written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/

// Defining function prototype
void swap(int *a, int *b);

int main()
{
    printf("Program written by Agneay B Nair\nCH.SC.U4CSE24102\n");
    int a, b;
    printf("Enter the value for the  first number: ");
    scanf("%d", &a);
    printf("Enter the value for the second number: ");
    scanf("%d", &b);

    printf("Before swapping values of A and B is: %d %d\n", a, b);
    swap(&a, &b);
    printf("After swapping values of A and B is: %d %d\n", a, b);

    return SUCCESS;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}