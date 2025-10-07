#include <stdio.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1

// Code written by Agneay B Nair
// Roll No: CH.SC.U4CSE241O2

int main()
{
    printf("Code written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    char c[] = "Hello World!";
    int len = strlen(c);
    char n[len];
    printf("Before copying string is:  %s\n", n);
    strcpy(n, c);
    printf("After copying string is : %s\n", n);

    return SUCCESS;
}