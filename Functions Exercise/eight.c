#include <stdio.h>

int isEven(int x);

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");
    int n, temp;

    printf("Enter the number of integers you want to check: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter any integer: ");
        scanf("%d", &temp);

        if (isEven(temp))
        {
            printf("%d is Even\n", temp);
        }
        else
        {
            printf("%d is Odd\n", temp);
        }
    }

    return 0;
}

int isEven(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}
