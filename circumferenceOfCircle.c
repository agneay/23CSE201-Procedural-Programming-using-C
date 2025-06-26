// To accept the radius and caluclate the area and circumference of the circle using the algorithm AreaCircumference

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
// defining PI
#define PI 3.14

double Circumference(int radius);
double Area(int radius);

int main()
{
    int radius;
    printf("Enter the radius of the circle :");
    scanf("%d", &radius);

    printf("The Circumference of the circle with radius %d is %.2lf \n", radius, Circumference(radius));
    printf("The Area of the given circle with radius %d is %.2lf \n", radius, Area(radius));

    return 0;
}

double Circumference(int radius)
{
    return 2 * PI * radius;
}

double Area(int radius)
{
    return PI * pow(radius, 2);
}