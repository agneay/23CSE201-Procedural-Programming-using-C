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
    for (int i = 0; i <)
}

void disp(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("]");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}