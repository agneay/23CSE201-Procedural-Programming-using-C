#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    // This program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int num;
    int a = 0, b = 1, c, temp;

    printf("Enter the number of times upto which you wish to see fibnacci sequence");
    scanf("%d", &num);

    printf("%d %d ", a, b);
    for (int i = 0; i <= num; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}