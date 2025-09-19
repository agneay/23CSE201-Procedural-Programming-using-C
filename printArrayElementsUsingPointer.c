#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Code written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("Program written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int n;
    printf("Enter the number of elements you want in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter any number: ");
        scanf("%d", arr + i);
    }
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", *(ptr + i));
    }
    return SUCCESS;
}