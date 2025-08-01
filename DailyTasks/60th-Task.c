#include <stdio.h>
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int x, n, sum = 0, odd = 1;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    for (int i = 0; i < n; i++)
    {
        sum += odd * x;
        odd += 2;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
