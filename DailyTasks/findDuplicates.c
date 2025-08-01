#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1
#define MAX 100
int main()
{
    int n;
    printf("Enter the number of elements you want to Enter for array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i);
        scanf("%d", &arr[i]);
    }

    int found[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        found[arr[i]] += 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (found[i] > 0)
            printf("%d\t", i);
    }
    printf("\n");
    return SUCCESS;
}