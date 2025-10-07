#include <stdio.h>
#include <string.h>

int main()
{
    printf("The code was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    char c[] = "Hello World!";
    printf("The string before reversal is: %s", c);
    // strrev(c);
    int left = 0;
    int right = strlen(c) - 1;
    while (right > left)
    {
        char temp = c[right];
        c[right] = c[left];
        c[left] = temp;

        right--;
        left++;
    }

    printf("The string after reversal is: %s\n", c);
}