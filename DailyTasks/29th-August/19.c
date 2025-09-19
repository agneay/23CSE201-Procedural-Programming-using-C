#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int NSum(int n);
// TO PRINT THE SUM OF N NATURAL NUMBERS
int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int n;
    printf("Enter the number of natural numbers you  want to add: ");
    scanf("%d", &n);

    int res = NSum(n);
    printf("The sum of first N natural numbers is: %d", res);
    return SUCCESS;
}

int NSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + NSum(n - 1);
}