#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SUCCESS 0
#define FAILURE -1

int checkChar(char c);

int main()
{
    char c;
    int alphaCount = 0, digitCount = 0, specialCount = 0;

    printf("Enter text (press Ctrl+D / Ctrl+Z to end):\n");

    while ((c = getchar()) != EOF)
    {
        switch (checkChar(c))
        {
        case 1:
            alphaCount++;
            break;
        case 2:
            digitCount++;
            break;
        case 3:
            specialCount++;
            break;
        }
    }

    printf("\nThe total number of alphabets are: %d\n", alphaCount);
    printf("The total number of digits are: %d\n", digitCount);
    printf("The total number of special characters are: %d\n", specialCount);

    return SUCCESS;
}

int checkChar(char c)
{
    if (isalpha(c))
        return 1; // alphabet
    if (isdigit(c))
        return 2; // digit
    if (ispunct(c) || isspace(c))
        return 3; // special (includes whitespace)
    return 0;     // safety fallback
}
