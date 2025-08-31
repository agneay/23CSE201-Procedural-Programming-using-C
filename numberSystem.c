#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function prototypes
void convert_to_bin(int num);
void convert_to_oct(int num);
void convert_to_hex(int num);

int main()
{
    // program was written BY Agneay B Nair
    //  Roll No: CH.SC.U4CSE24102
    printf("The program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    bool res = true;
    do
    {
        int decimal_no;
        printf("\nEnter the Decimal Number: ");
        scanf("%d", &decimal_no);
        printf("-----MENU-------\n");
        printf("1. Convert to Binary\n2. Convert to Octal\n3. Convert to Hexadecimal\n4. Exit\n");
        int choice = 0;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            convert_to_bin(decimal_no);
            break;
        case 2:
            convert_to_oct(decimal_no);
            break;
        case 3:
            convert_to_hex(decimal_no);
            break;
        case 4:
            res = false;
            exit(0);
            break;
        default:
            printf("Enter a valid choice [1-4]\n");
            break;
        }
    } while (res);

    return 0;
}

void convert_to_bin(int num)
{
    char binary[32];
    int i = 0;
    if (num == 0)
    {
        printf("Binary: 0\n");
        return;
    }
    while (num > 0)
    {
        binary[i++] = (num % 2) + '0';
        num /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", binary[j]);
    printf("\n");
}

void convert_to_oct(int num)
{
    char octal[32];
    int i = 0;
    if (num == 0)
    {
        printf("Octal: 0\n");
        return;
    }
    while (num > 0)
    {
        octal[i++] = (num % 8) + '0';
        num /= 8;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", octal[j]);
    printf("\n");
}

void convert_to_hex(int num)
{
    char hex[32];
    int i = 0;
    if (num == 0)
    {
        printf("Hexadecimal: 0\n");
        return;
    }
    while (num > 0)
    {
        int rem = num % 16;
        if (rem < 10)
            hex[i++] = rem + '0';
        else
            hex[i++] = rem - 10 + 'A';
        num /= 16;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");
}
