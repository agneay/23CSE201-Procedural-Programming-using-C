#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    bool isRun = true;
    int count = 0;
    while (isRun)
    {
        char ch;
        scanf(" %c", &ch);
        (ch == '*') ? isRun = false : count++;
    }
    printf("The number of characters entered excluing \'*\' is %d \n", count);
}