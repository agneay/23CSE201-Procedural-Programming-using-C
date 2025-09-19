#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

void dispNext(char c, int n);

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int n;
    char c;
    printf("Enter any character: ");
    scanf(" %c", &c);
    printf("Enter the number of next characters adjacent to which you want to print: ");
    scanf("%d", &n);
    dispNext(c, n);
    return SUCCESS;
}

void dispNext(char c, int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%c", c + i);
    }
}