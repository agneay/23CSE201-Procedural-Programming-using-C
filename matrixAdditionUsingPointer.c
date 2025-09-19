#include <stdio.h>

/*
Program written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/
int main()
{
    printf("Program written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int r, c;

    // Input matrix size
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], Sum[r][c];
    int *pA = &A[0][0];   // pointer to A
    int *pB = &B[0][0];   // pointer to B
    int *pS = &Sum[0][0]; // pointer to Sum

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", (pA + i * c + j));
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", (pB + i * c + j));
        }
    }

    // Add Matrices
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(pS + i * c + j) = *(pA + i * c + j) + *(pB + i * c + j);
        }
    }

    // Print Result
    printf("\nResultant Matrix (A + B):\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(pS + i * c + j));
        }
        printf("\n");
    }

    return 0;
}
