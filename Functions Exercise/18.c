#include <stdio.h>
#include <stdlib.h>

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// Recursive function to print digits in reverse order
void printReverse(int n)
{
    if (n == 0) // base case
        return;

    int digit = n % 10;
    printf("%d\t", digit); // print the last digit
    printReverse(n / 10);  // recursive call on the remaining number
}

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse order:\t");
    printReverse(num);

    return 0;
}
