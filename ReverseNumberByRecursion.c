#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int revNum(int num);
int main()
{
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