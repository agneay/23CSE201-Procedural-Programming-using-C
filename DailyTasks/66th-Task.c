#include <stdio.h>
int main()
{
    int books[5][4], total[5] = {0}, maxShelf = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Shelf %d book copies: ", i + 1);
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &books[i][j]);
            total[i] += books[i][j];
        }
        if (total[i] > total[maxShelf])
            maxShelf = i;
    }
    printf("Shelf with max books: %d\n", maxShelf + 1);
    return 0;
}
