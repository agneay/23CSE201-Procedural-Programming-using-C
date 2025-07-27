#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

void accept(int arr[], int n);
void spitOut(int arr[], int n);

int main()
{
    printf("Program written by Agneay B Nair");
    printf("Roll Number: CH.SC.U4CSE24102 \n");
    int n;
    printf("Enter number of numbers required: ");
    scanf("%d", &n);
    int arr[n];
    accept(arr, n);

    spitOut(arr, n);
    return SUCCESS;
}

void spitOut(int arr[], int n)
{
    printf("Printing Reverse\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d \n", arr[i]);
    }
}

void accept(int arr[], int n)
{
    printf("Enter %d numbers \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }
}