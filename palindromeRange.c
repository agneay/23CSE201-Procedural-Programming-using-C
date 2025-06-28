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
    
    bool res = checkPalindrome(num);
    (res) ? printf("%d is a palindrome \n", num) : printf("%d is not a palindrome \n", num);
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