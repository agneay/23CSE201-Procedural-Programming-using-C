#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Defining Function Prototype
void check_upper(int order, int arr[order][order]);
void check_lower(int order, int arr[order][order]);
void disp_trace(int order, int arr[order][order]);
void check_symmetric(int order, int arr[order][order]);
void check_identity(int order, int arr[order][order]);
void disp(int order, int arr[order][order]);

int main()
{
    // Program written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program Wrtten By Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    bool run = true;
    do
    {
        printf("-------Available Menu Options-------\n");
        printf("1. Check if Matrix is Symmetric\n2.Display the trace of a matrix(sum of diagonal Elements)\n3.Check if Matrix is a upper triangular Matrix\n4.Check if the Matrix is a Lower Triangular Matrix\n5.Check if it is an Identity Matrix\n6.Exit");
        int choice;
        printf("Enter Your Choice[1-6]");

        scanf("%d", &choice);
        if (choice == 6)
        {
            run = false;
            break;
        }
        int order = 0;
        printf("Enter the order of the square Matrix: ");
        scanf("%d", &order);
        int arr[order][order];
        for (int i = 0; i < order; i++)
        {
            for (int j = 0; j < order; j++)
            {
                printf("Enter  the element of (%d,%d)th cell: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        printf("The matrix you have entered is: ");
        disp(order, arr);
        switch (choice)
        {
        case 1:
            check_symmetric(order, arr);
            break;
        case 2:
            disp_trace(order, arr);
            break;
        case 3:
            check_upper(order, arr);
            break;
        case 4:
            check_lower(order, arr);
            break;
        case 5:
            check_identity(order, arr);
            break;
        default:
            break;
        }

    } while (run);

    return SUCCESS;
}
void disp(int order, int arr[order][order])
{
    printf("\n|");
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("%d\t", arr[order][order]);
        }
    }
    printf("|");
}
void disp_trace(int order, int arr[order][order])
{
    int sum = 0;
    for (int i = 0; i < order; i++)
    {
        sum += arr[i][i];
    }
    printf("The Trace of the Matrix is %d: ", sum);
}
void check_symmetric(int order, int arr[order][order])
{
    bool res = true;
    for (int i = 0; i < order; i++)
        for (int j = 0; j < order; j++)
        {
            if (arr[i][j] != arr[j][i])
                res = false;
        }
    res ? printf("The Matrix is a Symmetric Matrix") : printf("The matrix is NOT a symmteric Matrix");
}

void check_upper(int order, int arr[order][order])
{
    bool res = true;
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            if (i == j)
            {
                if (!(arr[i][j] == 1))
                    res = false;
            }
            else if (i < j)
            {
                if (!(arr[i][j] == 0))
                {
                    res = false;
                }
            }
        }
    }
    res ? printf("The matrix is a upper triangular Matrix") : printf("The matrix is NOT  a upper traingulat Matrix");
}

void check_lower(int order, int arr[order][order])
{
    bool res = true;
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            if (i == j)
            {
                if (!(arr[i][j] == 1))
                    res = false;
            }
            else if (i > j)
            {
                if (!(arr[i][j] == 0))
                {
                    res = false;
                }
            }
        }
    }
    res ? printf("The matrix is a upper triangular Matrix") : printf("The matrix is NOT  a upper traingulat Matrix");
}

void check_identity(int order, int arr[order][order])
{
    bool res = true;
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            if (i == j)
            {
                if (!(arr[i][j] == 1))
                    res = false;
            }
            else
            {
                if (!(arr[i][j] == 0))
                    res = false;
            }
        }
    }
    res ? printf("The matrix is a Identity Matrix") : printf("The Matrix is Not a Identity Matrix");
}