#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Prototype Declaration
void accept(int r1, int c1, int A[r1][c1], char NameOfMatrix);
void Add(int r1, int c1, int r2, int c2, int A[r1][c1], int B[r2][c2]);
void Mutltiply(int r1, int c1, int r2, int c2, int A[r1][c1], int B[r2][c2]);
void disp(int r, int c,int A[r][c]);


int main()
{
    bool run = true;
    int ch = 0;
    do
    {
        printf("\n-------Menu of Matrix Operations------\n1.Add two Array\n2.Multiply two Arrays\n3.Exit\n-------------\n");
        printf("Enter your Choice[1-3]: ");
        scanf("%d", &ch);
        if (ch == 1 || ch == 2)
        {
            int r1, c1, r2, c2;
            printf("Enter the details of the first Matrix \n");
            printf("Enter the number of rows: ");
            scanf("%d", &r1);
            printf("Enter the number of columns: ");
            scanf("%d", &c1);
            int A[r1][c1];
            accept(r1, c1, A, 'A');

            printf("Enter the details of the second Matrix\n");
            printf("Enter the number of rows: ");
            scanf("%d", &r2);
            printf("Enter the number of columns: ");
            scanf("%d", &c2);
            int B[r2][c2];
            accept(r2, c2, B, 'B');

            printf("The enterd input Matrices are: ");
            disp(r1, c1, A);
            dips(r2, c2, B);

            if (ch == 1)
                Add(r1, c1, r2, c2, A, B);
            else
                Multiply(r1, c1, r2, c2, A, B);
        }
        else if (ch == 3)
        {
            run = false;
            exit(0);
        }
        else
        {
            printf("Enter a valid choice[1-3]");
        }
    } while (run);

    return SUCCESS;
}