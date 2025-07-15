#include <stdio.h>
#include <stdlib.h>

void printDigitInWords(int digit)
{
    switch (digit)
    {
    case 0:
        printf("Zero ");
        break;
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    default:
        printf("Invalid ");
        break;
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle negative numbers
    if (n < 0)
    {
        printf("Minus ");
        n = abs(n);
    }

    // Store digits in reverse order
    int reversed = 0, temp = n;
    if (n == 0)
    {
        printDigitInWords(0);
    }
    else
    {
        while (temp > 0)
        {
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }

        // Print digits in original order
        while (reversed > 0)
        {
            int digit = reversed % 10;
            printDigitInWords(digit);
            reversed /= 10;
        }
    }

    printf("\n");
    return 0;
}
