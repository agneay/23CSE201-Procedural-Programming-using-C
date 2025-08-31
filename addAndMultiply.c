#include <stdio.h>

#define MAX 10 // Maximum size of matrix

// Function Prototypes
void acceptMatrix(int matrix[MAX][MAX], int rows, int cols);
void displayMatrix(int matrix[MAX][MAX], int rows, int cols);
void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int rows, int cols);
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int r1, int c1, int r2, int c2);

int main()
{
    printf("The program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102");
    // Program was written by Agneay B Nair
    // Roll NO: CH.SC.U4CSE24102
    int A[MAX][MAX], B[MAX][MAX];
    int r1, c1, r2, c2;

    // Input dimensions
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Accept matrices
    printf("Enter elements of first matrix:\n");
    acceptMatrix(A, r1, c1);

    printf("Enter elements of second matrix:\n");
    acceptMatrix(B, r2, c2);

    // Display matrices
    printf("\nFirst Matrix:\n");
    displayMatrix(A, r1, c1);

    printf("\nSecond Matrix:\n");
    displayMatrix(B, r2, c2);

    // Perform addition (only if dimensions match)
    if (r1 == r2 && c1 == c2)
    {
        printf("\nSum of matrices:\n");
        addMatrices(A, B, r1, c1);
    }
    else
    {
        printf("\nAddition not possible! Dimensions do not match.\n");
    }

    // Perform multiplication (only if c1 == r2)
    if (c1 == r2)
    {
        printf("\nProduct of matrices:\n");
        multiplyMatrices(A, B, r1, c1, r2, c2);
    }
    else
    {
        printf("\nMultiplication not possible! Columns of first matrix must equal rows of second matrix.\n");
    }

    return 0;
}

// Function to accept a matrix
void acceptMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int rows, int cols)
{
    int result[MAX][MAX];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int r1, int c1, int r2, int c2)
{
    int result[MAX][MAX];

    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;

    // Multiply
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }
}
