#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include<ctype.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int tot_count = 0;
    int alpha_count = 0;
    int digit_count = 0;
    bool run = true;
    while (run)
    {
        char ch;
        scanf(" %c", &ch);
        if (ch == '#')
        {
            run = false;
        }
        else if (isdigit(ch))
        {
            digit_count++;
        }
        else
        {
            alpha_count++;
        }
        tot_count++;
    }
    printf("The total number of Digits %d : ", digit_count);
    printf("\nThe total number of Alphabets are %d :", alpha_count);
    printf("\nThe total number of characters: %d", tot_count);
    return SUCCESS;
}