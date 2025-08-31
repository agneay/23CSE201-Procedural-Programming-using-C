#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Defining Function prototype
void disp(int m, int n, int A[m][n]);
void disp_transpose(int m, int n, int A[m][n]);

int main()
{
    // Code was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Code written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n"); 
    int m, n;
    printf("Enter the number of rows for Matrix A: ");
    scanf("%d", &m);
    printf("Enter the number of columns of Matrix B: ");
    scanf("%d", &n);
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of (%d,%d)th element: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nThe matrix A is: \n");
    disp(m, n, A);
    printf("\nThe Transpose of Matrix A is: \n");
    disp_transpose(m, n, A);
    return SUCCESS;
}
void disp_transpose(int m, int n, int A[m][n])
{
    for (int i = 0; i < m; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", A[j][i]);
        }
        printf("|\n");
    }
}
void disp(int m, int n, int A[m][n])
{
    for (int i = 0; i < m; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("|\n");
    }
}