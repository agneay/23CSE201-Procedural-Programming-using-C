#include <stdio.h>

/*
Program written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/
void transpose(int *mat, int *trans, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // Using pointer arithmetic
            *(trans + j * row + i) = *(mat + i * col + j);
        }
    }
}

int main()
{
    printf("Program written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    int mat[row][col], trans[col][row];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Call transpose using pointers
    transpose((int *)mat, (int *)trans, row, col);

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
