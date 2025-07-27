#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

bool find(int key, int arr[], int n)
{
    bool res = false;
    printf("Searching for key.....");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            res = true;
        }
    }
    return res;
}

int main()
{
    // Code written by Agneay B Nair
    // Roll Number: CH.SC.U4CSE24102
    printf("Code written by Agneay B Nair");
    printf("Roll Number: CH.SC.U4CSE24102\n");
    int n;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth number\n", i);
        scanf("%d", &arr[i]);
    }
    int searchKey = 0;
    printf("Enter the key you wish to search: ");
    scanf("%d", &searchKey);
    bool res = find(searchKey, arr, n);
    (res) ? printf("%d found", searchKey) : printf("%d NOT found", searchKey);
    return SUCCESS;
}