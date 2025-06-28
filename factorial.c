#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int factorial(int num);
int main()
{
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int num;
    printf("Enter the number of which you want to calculate the factorial");
    scanf("%d", &num);
    int res = factorial(num);
    printf("The factorial of %d is %d \n", num, res);
}

int factorial(int num)
{
    int res = 1;
    while (num != 0)
    {
        res *= num;
        num--;
    }
    return res;
}