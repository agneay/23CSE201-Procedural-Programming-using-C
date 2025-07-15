#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

bool isAmstrong(int i)
{
    int dummy = i;
    int count = 0;
    while (dummy != 0)
    {
        int rem = dummy % 10;
        count += pow(rem, 3);
        dummy /= 10;
    }
    return (count == i);
}

int main()
{
    int start, stop;
    printf("Enter the range start value: ");
    scanf("%d", &start);
    printf("Enter the stoping range value: ");
    scanf("%d", &stop);
    printf("The palindrome numbers are: ");
    if (start > stop)
    {
        int temp = start;
        start = stop;
        stop = temp;
    }
    for (int i = start; i <= stop; i++)
    {
        if (isAmstrong(i))
        {
            printf("%d\n", i);
        }
    }
    return SUCCESS;
}