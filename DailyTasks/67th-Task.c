#include <stdio.h>
int main()
{
    int scores[6][4], total[6] = {0}, bestPlayer = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Player %d scores: ", i + 1);
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &scores[i][j]);
            total[i] += scores[i][j];
        }
        if (total[i] > total[bestPlayer])
            bestPlayer = i;
    }
    printf("Best Player: %d with score %d\n", bestPlayer + 1, total[bestPlayer]);
    return 0;
}
