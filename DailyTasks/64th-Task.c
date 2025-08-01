#include <stdio.h>
int main()
{
    int scores[5][11], total[5] = {0}, bestMatch = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Match %d scores: ", i + 1);
        for (int j = 0; j < 11; j++)
        {
            scanf("%d", &scores[i][j]);
            total[i] += scores[i][j];
        }
        if (total[i] > total[bestMatch])
            bestMatch = i;
    }
    printf("Highest Score Match: %d\n", bestMatch + 1);
    return 0;
}
