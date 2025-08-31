#include <stdio.h>
#include <stdlib.h>

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// Global variable to store balance
float balance = 0.0;

// Function prototypes
void deposit(float amount);
void withdraw(float amount);
void checkBalance();

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int choice;
    float amount;

    do
    {
        printf("\n===== Simple Banking System =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            deposit(amount);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            withdraw(amount);
            break;

        case 3:
            checkBalance();
            break;

        case 4:
            printf("Exiting program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function definitions
void deposit(float amount)
{
    if (amount <= 0)
    {
        printf("Deposit amount must be positive.\n");
    }
    else
    {
        balance += amount;
        printf("Successfully deposited %.2f. New balance: %.2f\n", amount, balance);
    }
}

void withdraw(float amount)
{
    if (amount <= 0)
    {
        printf("Withdrawal amount must be positive.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance! Current balance: %.2f\n", balance);
    }
    else
    {
        balance -= amount;
        printf("Successfully withdrawn %.2f. New balance: %.2f\n", amount, balance);
    }
}

void checkBalance()
{
    printf("Current Balance = %.2f\n", balance);
}
