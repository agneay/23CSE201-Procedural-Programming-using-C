#include <string.h>
#include <stdio.h>

#define SUCCESS 0
#define FAILURE -1

// code written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("The code was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    char c[] = "Hello";
    char b[] = "World!";
    printf("The result of comparing %s and %s is: %d so....", c, b, strcmp(c, b));
    if (strcmp(c, b) == 0)
    {
        printf("The strings are equal");
    }
    else if (strcmp(c, b) < 0)
    {
        printf("The first string is smaller than  the  second");
    }
    else
    {
        printf("The first string is larger  than the second");
    }
    printf("\n");
    return SUCCESS;
}