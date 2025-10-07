#include <stdio.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1

// The code is written by Agneay B Nair
//  Roll No: CH.SC.U4CSE24102

int main()
{
    char a[100] = "Hello";
    char b[] = " World!";
    printf("Code was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    printf("Before concatenating string is: %s\n", a);
    strcat(a, b);
    printf("After concatenating string is: %s\n", a);
    return SUCCESS;
}