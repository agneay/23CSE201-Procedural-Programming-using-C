#include <stdio.h>
#include <stdlib.h>

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// Recursive function to calculate x^y
long long power(int x, int y)
{
    if (y == 0) // base case: anything^0 = 1
        return 1;
    else if (y == 1) // base case: anything^1 = itself
        return x;
    else
        return x * power(x, y - 1); // recursive step
}

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int x, y;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    printf("%d^%d = %lld\n", x, y, power(x, y));

    return 0;
}
