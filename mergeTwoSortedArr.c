#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Declaring Function Prototype
void mergeArray(int *arr1, int *arr2, int *newArr, int size1, int size2);
void disp(int arr[], int size);

int main()
{
    // Program written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program Written By Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    int newArrSize = size1 + size2;
    int newArr[newArrSize];
    mergeArray(arr1, arr2, newArr, size1, size2);
    printf("The new merged sorted array is: ");
    disp(newArr, newArrSize);
    return SUCCESS;
}

void mergeArray(int *arr1, int *arr2, int *newArr, int size1, int size2)
{
    int pt1 = 0, pt2 = 0, top = -1;
    while (pt1 < size1 && pt2 < size2)
    {
        if (arr1[pt1] < arr2[pt2])
        {
            newArr[++top] = arr1[pt1++];
        }
        else
        {
            newArr[++top] = arr2[pt2++];
        }
    }
    while (pt1 < size1)
    {
        newArr[++top] = arr1[pt1++];
    }
    while (pt2 < size2)
    {
        newArr[++top] = arr2[pt2++];
    }
}
void disp(int arr[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("]\n");
}