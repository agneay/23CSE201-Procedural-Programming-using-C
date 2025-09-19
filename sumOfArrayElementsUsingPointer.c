#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

/*
Program written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/
int main()
{
    printf("Program written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int n;
    printf("Enter the number of elements you wish to have in your array");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter any number: ");
        scanf("%d", arr + i);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    printf("The sum of the elements of array using pointer is: %d\n", sum);
    return SUCCESS;
}