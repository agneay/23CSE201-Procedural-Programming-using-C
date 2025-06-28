#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool checkPalindrome(int num);

int main()
{
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