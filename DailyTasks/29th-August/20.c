#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int choice, num1, num2;
    do
    {
        // Display menu
        printf("\n===== Calculator Menu =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            // Take input numbers
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
        }

        switch (choice)
        {
        case 1:
            printf("Result = %d\n", add(num1, num2));
            break;
        case 2:
            printf("Result = %d\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result = %d\n", multiply(num1, num2));
            break;
        case 4:
            if (num2 == 0)
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            else
            {
                printf("Result = %.2f\n", divide(num1, num2));
            }
            break;
        case 5:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function definitions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}
