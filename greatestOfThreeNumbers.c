#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num[3];
    int max = 0;
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        printf("Enter the %d number: ", i);
        scanf("%d", &num[i]);
        if (num[i] > max)
            max = num[i];
    }
    printf("The greatest of the three number is %d \n", max);
    return 0;
}
