#include <stdio.h>
// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int main()
{
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is positive \n", num);
    else if (num < 0)
        printf("%d is negative \n", num);
    else
        printf("The number is zero \n");

    return 0;
}
