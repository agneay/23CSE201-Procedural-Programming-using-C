#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Code writen by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

#define SUCCESS 0
#define FAILURE -1

int isPalindrome(char *str)
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main()
{
    printf("Code written by Agneay B Nair\n");
    printf("Roll No: CH.SC.U4CSE24102\n");

    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str))
    {
        printf("%s is a palindrome", str);
    }
    else
    {
        printf("%s is not a palindrome", str);
    }
    return SUCCESS;
    ;
}
