#include <stdio.h>

#define SUCCESS 0
#define FAILURE -1

// Code written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
void toUpperCase(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str -= ('a' - 'A');
        }
        str++;
    }
}
int main()
{
    printf("Code written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    char str[100];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    toUpperCase(str);
    printf("Uppercase string: %s\n", str);
    return SUCCESS;
}