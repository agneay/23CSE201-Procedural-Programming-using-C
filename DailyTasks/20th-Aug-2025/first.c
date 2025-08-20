// Program to add two numbers using functions
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

// Program written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// declaring function prototype
int addNum(int a, int b);

int main()
{
    int a, b, res;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    res = addNum(a, b);
    printf("The addition of %d and %d results in: %d\n", a, b, res);
    return SUCCESS;
}

int addNum(int a, int b)
{
    return a + b;
}