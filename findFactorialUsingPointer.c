#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

/*Program  Written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/

// Defining Funtion Prototype
int findFactorial(int *n);

int main()
{
    printf("The program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int n;
    printf("Enter the number you want to find the factorial  for: ");
    scanf("%d", &n);
    int res = findFactorial(&n);
    printf("The factorial of %d is %d\n", n, res);
    return SUCCESS;
}

int findFactorial(int *n)
{
    if (*n == 1)
        return 1;
    int next = *n - 1;
    return *n * findFactorial(&next);
}