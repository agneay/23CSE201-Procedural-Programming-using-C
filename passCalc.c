/* a set of 100 values representing marks of students,
count the total students that have passed.
(A score of 40 is required for passing.) */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    int temp;
    int arr[100];
    int count = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("Enter the marks of %d student :", i + 1);
        scanf("%d", &temp);
        if (temp >= 40)
            count++;
        arr[i] = temp;
    }
    printf("The number of students who have passed are: %d \n", count);
    return 0;
}
