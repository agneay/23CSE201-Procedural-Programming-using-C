#include <stdio.h>

#define SUCCESS 0
#define FAILURE -1

int sumOfDigits(int i)
{
    int sum = 0;
    int dummy = i;
    while (dummy != 0)
    {
        int rem = dummy % 10;
        sum += rem;
        dummy /= 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number of numbers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The greatest number is: %d", max);
    return SUCCESS;
}