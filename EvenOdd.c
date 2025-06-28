// To check if a number is even or odd

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("%d number is even \n", n) : printf("%d number is odd \n", n);
    return 0;
}