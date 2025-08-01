#include <stdio.h>
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
        arr[i] = i;
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    return 0;
}
