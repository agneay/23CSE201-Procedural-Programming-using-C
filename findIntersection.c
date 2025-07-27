#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    // Program Written by Agneay B Nair
    //  CH.SC.U4CSE24102
    printf("Program Written by Agneay B Nair\n");
    printf("Roll No: CH.SC.U4CSE24102\n");

    int a, b;
    printf("Enter the size of the first Array: ");
    scanf("%d", &a);
    printf("Enter the size of the second Array: ");
    scanf("%d", &b);
    int arr1[a], arr2[b];
    int intersect[(a > b) ? a : b];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the %dth element of First Array: ", i + 1);
        scanf("%d", arr1 + i);
    }
    for (int j = 0; j < b; j++)
    {
        printf("Enter the %dth element of Second Array: ", j + 1);
        scanf("%d", arr2 + j);
    }
    int top = -1;

    for (int k = 0; k < a; k++)
    {
        for (int i = 0; i < b; i++)
        {
            if (arr1[k] == arr2[i])
            {
                bool exists = false;
                for (int j = 0; i < top; i++)
                {
                    if (intersect[top] == arr1[k])
                    {
                        exists = true;
                    }
                }
                if (!exists)
                    intersect[++top] = arr1[k];
            }
        }
    }
    printf("The intersecting Elements are: ");
    if (top == -1)
        printf("No intersecting Elements");
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t", intersect[i]);
    }
    printf("\n");

    return SUCCESS;
}