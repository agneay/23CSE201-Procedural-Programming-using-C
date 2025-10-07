#include <stdio.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1

// Code written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("Code written by Agneay B Nair\nRoll No: CH.SC.U4CSE241O2\n");
    char c[] = "Hello World!";
    puts(c);
    printf("The length of %s is %d\n", c, (int)strlen(c));
    return SUCCESS;
}