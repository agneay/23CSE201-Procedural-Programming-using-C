#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE -1

void power()
{
    double a, b;
    printf("Enter the base: ");
    scanf("%lf", &a);
    printf("Enter the exponent: ");
    scanf("%lf", &b);
    double res = pow(a, b);
    printf("%.2lf ^ %.2lf = %.2lf\n", a, b, res);
}

void squareRoot()
{
    double a;
    printf("Enter the number: ");
    scanf("%lf", &a);
    if (a < 0)
    {
        printf("Square root of a negative number is not defined in real numbers!\n");
    }
    else
    {
        double res = sqrt(a);
        printf("The square root of %.2lf is %.2lf\n", a, res);
    }
}

void floorFunc()
{
    double a;
    printf("Enter the number: ");
    scanf("%lf", &a);
    double res = floor(a);
    printf("The floor of %.2lf is %.2lf\n", a, res);
}

void ceilFunc()
{
    double a;
    printf("Enter the number: ");
    scanf("%lf", &a);
    double res = ceil(a);
    printf("The ceiling of %.2lf is %.2lf\n", a, res);
}

int main()
{
    bool run = true;
    while (run)
    {
        printf("\nMENU\n1. POWER\n2. SQUARE ROOT\n3. FLOOR\n4. CEILING\n5. EXIT\n");
        int choice;
        printf("Enter your choice [1-5]: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            power();
            break;
        case 2:
            squareRoot();
            break;
        case 3:
            floorFunc();
            break;
        case 4:
            ceilFunc();
            break;
        case 5:
            run = false;
            break;
        default:
            printf("Enter a valid number!\n");
            break;
        }
    }
    return SUCCESS;
}
