#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

/*
The program was written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/

int main()
{
    printf("The program was written by Agneay B Nair\n");
    printf("Roll No: CH.SC.U4CSE24102\n");
    int n;
    printf("Enter the number of elements you wish to have in your array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter any number: ");
        scanf("%d", arr + i);
    }
    int max = *arr;
    for (int i)
        printf("The max element present in the array has a value of %d", max);
}