#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define FAILURE -1
#define SUCCESS 0
#define PI 3.14159

// defining function prototypes
void circle();
void cylinderArea();
void cylinderVolume();

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    bool run = true;
    while (run)
    {
        printf("\nMENU\n1. Area of Circle\n2. Surface Area of Cylinder\n3. Volume of Cylinder\n4. Exit\n");
        printf("Enter your choice [1-4]: ");

        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            circle();
            break;
        case 2:
            cylinderArea();
            break;
        case 3:
            cylinderVolume();
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

void circle()
{
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    double area = PI * pow(radius, 2);
    printf("The area of a circle with radius %.2lf is %.2lf\n", radius, area);
}

void cylinderArea()
{
    double height, radius;
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    double area = 2 * PI * radius * (radius + height);
    printf("The surface area of the cylinder with height %.2lf and radius %.2lf is %.2lf\n", height, radius, area);
}

void cylinderVolume()
{
    double height, radius;
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    double volume = PI * pow(radius, 2) * height;
    printf("The volume of the cylinder with height %.2lf and radius %.2lf is %.2lf\n", height, radius, volume);
}
