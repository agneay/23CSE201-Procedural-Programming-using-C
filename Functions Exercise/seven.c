#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int isWhitespace(char ch)
{
    if (ch == ' ' || ch == '\t' || ch == '\n')
    {
        return 1; // true
    }
    return 0; // false
}

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int count = 0; // to store the number of whitespaces
    char ch;

    printf("Enter Characters (press Ctrl + D/ Ctrl+Z to stop): \n");
}