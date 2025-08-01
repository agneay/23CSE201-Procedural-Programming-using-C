#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int PlayerRecord[6][4];
    int totScore[6];
    printf("Enter the Score of each player for the following sessions\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the score of the %dth player for the first session: ", i);
        scanf("%d", &PlayerRecord[i][0]);
        printf("Enter the score of the %dth player for the second session: ", i);
        scanf("%d", &PlayerRecord[i][1]);
        printf("Enter the score of the %dth player for the third session: ", i);
        scanf("%d", &PlayerRecord[i][2]);
        printf("Enter the score of the %dth player for the fourth session: ", i);
        scanf("%d", &PlayerRecord[i][3]);

        int totScoreNow = (PlayerRecord[i][0] + PlayerRecord[i][1] + PlayerRecord[i][2] + PlayerRecord[i][3]);
        totScore[i] = totScoreNow;
    }
    printf("Displaying the Data: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("The score of the %dth player for the first session: %d\n", i, PlayerRecord[i][0]);
        printf("The score of the %dth player for the second session: %d\n", i, PlayerRecord[i][1]);
        printf("The score of the %dth player for the third session: %d\n", i, PlayerRecord[i][2]);
        printf("The score of the %dth player for the fourth session: %d\n", i, PlayerRecord[i][3]);

        printf("The Total Score of %dth Player is: %d\n", i, totScore[i]);
    }
    int max = totScore[0];
    int count = 0;
    for (int i = 1; i < 4; i++)
    {
        if (max < totScore[i])
        {
            max = totScore[i];
            count = i;
        }
    }
    printf("The max Score was gained by %dth player and it was %d", count, max);

    return SUCCESS;
}