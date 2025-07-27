#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

int calcOccurence(int key, int arr[], int n);

int main()
{
    // Program written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program written by Agneay B Nair");
    printf("Roll No: CH.SC.U4CSE24102\n");
    int n, key;
    printf("Enter the number of elements you want in your array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element", i);
        scanf("%d", arr + i);
    }
    printf("Enter the key for which occurence must be  calculated");
    scanf("%d", &key);
    int occurence = calcOccurence(key, arr, n);
    printf("%d occurs %d times\n", key, occurence);
    return SUCCESS;
}

int calcOccurence(int key, int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            count++;
    }
    return count;
}