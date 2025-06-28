#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int revNum(int num);
int main()
{
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int num;
    printf("Enter any integer: ");
    scanf("%d", &num);
    int revvrseDigit = revNum(num);
    printf("The reversed digit is: %d \n", revvrseDigit);
    return 0;
}

int revNum(int num)
{
    int revNum = num;
    int res;
    int temp;
    while (revNum != 0)
    {
        res = revNum % 10;
        temp = temp * 10 + res;
        revNum /= 10;
    }
    return temp;
}