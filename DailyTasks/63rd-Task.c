#include <stdio.h>
int main()
{
    int ratings[4][3];
    float avg[3] = {0};
    printf("Enter ratings (4 viewers × 3 movies):\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ratings[i][j]);
            avg[j] += ratings[i][j];
        }
    int bestMovie = 0;
    printf("Ratings:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", ratings[i][j]);
        printf("\n");
    }
    printf("Average:\n");
    for (int j = 0; j < 3; j++)
    {
        avg[j] /= 4.0;
        printf("Movie %d: %.2f\n", j + 1, avg[j]);
        if (avg[j] > avg[bestMovie])
            bestMovie = j;
    }
    printf("Best Movie: %d\n", bestMovie + 1);
    return 0;
}
