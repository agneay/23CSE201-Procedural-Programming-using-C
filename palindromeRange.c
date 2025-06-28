#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
// This code was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

bool checkPalindrome(int num);

int main()
{
    printf("This code was written by Agneay B Nair\n ROll No: CH.SC.U4CSE24102\n");
    int start, end;
    printf("Enter The starting range: ");
    scanf("%d", &start);
    printf("Enter The ending range: ");
    scanf("%d", &end);
    if (start > end)
    {
        int temp = start;
        start = end;
        end = temp;
    }
    for (int i = start; i <= end; i++)
    {
        bool res = checkPalindrome(i);
        (res) ? printf("%d is a palindrome \n", i) : printf("%d is not a palindrome \n", i);
    }
}

bool checkPalindrome(int num)
{
    int reversed = 0;
    int dummy = num;
    while (dummy != 0)
    {
        int rem = dummy % 10;
        reversed = reversed * 10 + rem;
        dummy /= 10;
    }
    return (reversed == num);
}