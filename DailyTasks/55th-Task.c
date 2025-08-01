#include <stdio.h>
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int n, i = 0, arr[10];
    printf("Enter number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        arr[i++] = n % 10;
        n /= 10;
    }
    printf("Reversed: ");
    for (int j = 0; j < i; j++)
        printf("%d", arr[j]);
    return 0;
}
