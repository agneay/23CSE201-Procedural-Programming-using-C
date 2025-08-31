#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Prototype Declaration
int bubbleSort(int arr[], int n);
void disp(int arr[], int n);
void swap(int *a, int *b);

int main()
{
    // Program Written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program Written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102S");
    int n;
    printf("Enter the number of element you want to be stored in your Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element of your array: ", i);
        scanf("%d", arr + i);
    }
    printf("Array before Sorting: ");
    disp(arr, n);
    bubbleSort(arr, n);
    printf("Array After Sorting: ");
    disp(arr, n);
    return SUCCESS;
}

int bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void disp(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("]\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}