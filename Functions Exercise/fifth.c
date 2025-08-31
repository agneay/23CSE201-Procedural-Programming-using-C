#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// Defining function prototypes

void calcDistance(int x1, int y1, int x2, int y2);
void calcSlope(int x1, int y1, int x2, int y2);
void checkQuadrant(int x1, int y1, int, int y2);

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    int x1, x2, y1, y2;
    printf("Enter the X coordinate of the first Point: ");
    scanf("%d", &x1);
    printf("Enter the Y coordinate of the first Point: ");
    scanf("%d", &y1);
    printf("Enter the X coordinate of the second Point: ");
    scanf("%d", &x2);
    printf("Enter the Y coordinate of the second Point: ");
    scanf("%d", &y2);

    bool run = true;
    while (run)
    {
        printf("\nMENU\n1. Distance Between two Points\n2. Slope of line between two points\n3. Check whether they lie in the same quadrant\n4. Exit\n");
        printf("Enter your choice [1-4]: ");
        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            calcDistance(x1, y1, x2, y2);
            break;
        case 2:
            calcSlope(x1, y1, x2, y2);
            break;
        case 3:
            checkQuadrant(x1, y1, x2, y2);
            break;
        case 4:
            run = false;
            break;
        default:
            printf("Enter a valid choice [1-4]\n");
            break;
        }
    }
    return SUCCESS;
}

void calcDistance(int x1, int y1, int x2, int y2)
{
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("The distance between the points (%d,%d) and (%d,%d) is %.2f\n", x1, y1, x2, y2, distance);
}

void calcSlope(int x1, int y1, int x2, int y2)
{
    if (x2 == x1)
    {
        printf("The line between (%d,%d) and (%d,%d) is vertical, slope is undefined.\n", x1, y1, x2, y2);
    }
    else
    {
        double slope = (double)(y2 - y1) / (x2 - x1);
        printf("The slope of points (%d,%d) and (%d,%d) is %.2f\n", x1, y1, x2, y2, slope);
    }
}

void checkQuadrant(int x1, int y1, int x2, int y2)
{
    bool isQuadrant;
    if (((x1 > 0 && x2 > 0) && (y1 > 0 && y2 > 0)) ||
        ((x1 < 0 && x2 < 0) && (y1 < 0 && y2 < 0)) ||
        ((x1 > 0 && x2 > 0) && (y1 < 0 && y2 < 0)) ||
        ((x1 < 0 && x2 < 0) && (y1 > 0 && y2 > 0)))
    {
        isQuadrant = true;
    }
    else
    {
        isQuadrant = false;
    }

    if (isQuadrant)
    {
        printf("(%d,%d) and (%d,%d) lie in the same quadrant.\n", x1, y1, x2, y2);
    }
    else
    {
        printf("(%d,%d) and (%d,%d) lie in different quadrants.\n", x1, y1, x2, y2);
    }
}
