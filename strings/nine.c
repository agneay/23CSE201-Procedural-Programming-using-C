#include <stdio.h>

#define SUCCESS 0
#define FAILURE -1

// Code written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("Code written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    char c[] = "hello world!";
    char *ptr = c;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
}
