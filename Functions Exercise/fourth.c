#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Defining Function Prototypes

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

void doAdd();
void doSubtract();
void doMultiply();

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    bool run = true;
    while (run)
    {
        printf("MENU\n1. Addition\n2. Subtraction\n3. Mutliplication\n4. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            doAdd();
            break;
        case 2:
            doSubtract();
            break;
        case 3:
            doMultiply();
            break;
        case 4:
            run = false;
            break;
        default:
            printf("Please select a valid choice");
            break;
        }
    }
    return SUCCESS;
}

void doAdd()
{
    int a, b;
    printf("Enter the first number you want to add: ");
    scanf("%d", &a);
    printf("Enter the second number you want to add: ");
    scanf("%d", &b);
    int res = a + b;
    printf("The sum of %d and %d is %d", a, b, res);
}

void doSubtract()
{
    int a, b;
    printf("Enter the first number you want to subtract: ");
    scanf("%d", &a);
    printf("Enter the second number you want to subtract: ");
    scanf("%d", &b);
    int res = a - b;
    printf("The difference of %d and %d is %d", a, b, res);
}

void doMultiply()
{
    int a, b;
    printf("Enter the first number you want to multiply: ");
    scanf("%d", &a);
    printf("Enter the second number you want to multiply: ");
    scanf("%d", &b);
    int res = a * b;
    printf("The product of %d and %d is %d", a, b, res);
}