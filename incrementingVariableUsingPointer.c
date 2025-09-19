#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Code written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("Code written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int a;
    printf("Enter the any number: ");
    scanf("%d", &a);
    printf("The data stored in the number is: %d\n", a);
    int *ptr = &a;
    printf("The data which pointer points to is %d\n", *ptr);
    *ptr += 1;
    printf("The data after incrmenting using pointer is: %d\n", a);
    return SUCCESS;
}