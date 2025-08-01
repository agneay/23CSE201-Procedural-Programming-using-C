#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int tempRecord[7][3];
    int avgTemp[3];
    printf("Enter the temperature of the 7 days\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the temperature of the %dth day for Morning: ", i);
        scanf("%d", &tempRecord[i][0]);
        printf("Enter the temperature of the %dth day for Afternoon: ", i);
        scanf("%d", &tempRecord[i][1]);
        printf("Enter the temperature of the %dth day for Evening: ", i);
        scanf("%d", &tempRecord[i][2]);
        int avgTempNow = (tempRecord[i][0] + tempRecord[i][1] + tempRecord[i][2]) / 3;
        avgTemp[i] = avgTempNow;
    }
    printf("Displaying the Data: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("The temperature during Morining of the %dth day is: %d\n", i, tempRecord[i][0]);
        printf("The temperature during the Afternoon of the %dth day is: %d\n", i, tempRecord[i][1]);
        printf("The temperature during the Evenining of the %dth day is: %d\n", i, tempRecord[i][2]);
        printf("The average temperature during %dth day is: %d\n", i, avgTemp[i]);
    }
    int max = avgTemp[0];
    int count = 0;
    for (int i = 1; i < 7; i++)
    {
        if (max < avgTemp[i])
        {
            max = avgTemp[i];
            count = i;
        }
    }
    printf("The max Average temperature was recorded during %d and it was %d", count, max);

    return SUCCESS;
}