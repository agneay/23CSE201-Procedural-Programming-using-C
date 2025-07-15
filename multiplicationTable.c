#include <stdio.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int n;
    printf("Enter the value for N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
    return SUCCESS;
}