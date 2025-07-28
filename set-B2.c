#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// defining function prototype
void disp_modified(int m, int n, int arr[m][n]);

int main()
{
    int m = 0, n = 0;
    printf("Enter the number of rows you wish to have in your Array: ");
    scanf("%d", &m);
    printf("Enter the number of columns you wish to have in your Array: ");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of element (%d,%d): ");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Array  You have entered is: \n");
    for (int i = 0; i < m; i++)
    {
        printf("|\t");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("|\n");
    }
    printf("The array after modifications is: \n");
    disp_modified(m, n, arr);
    return SUCCESS;
}

void disp_modified(int m, int n, int arr[m][n])
{
    int rowSum = 0, ColSum = 0;
    for (int i = 0; i < m; i++)
    {
        int rowSum = 0;
        printf("|\t");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
            rowSum += arr[i][j];
        }
        printf("%d\t|\n", rowSum);
    }
    for (int i = 0; i < m; i++)
    {
        printf("|\t");
        for (int j = 0; j < n; j++)
        {
            ColSum += arr[n][m];
        }
        printf("%d\t", ColSum);
        ColSum = 0;
    }
    printf("\t|\n");
}