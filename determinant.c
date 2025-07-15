#include <stdio.h>
#include <math.h>

#define SUCCESS 0

void findRoots(float a, float b, float c)
{
    float discriminant = b * b - 4 * a * c;
    float root1, root2;

    printf("\nQuadratic Equation Roots:\n");

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Real and Distinct Roots: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Real and Equal Roots: %.2f and %.2f\n", root1, root1);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        printf("Complex Roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
}

void findProfitOrLoss(float cost, float sell)
{
    printf("\nProfit or Loss Calculation:\n");

    if (sell > cost)
    {
        printf("Profit: ₹%.2f\n", sell - cost);
    }
    else if (sell < cost)
    {
        printf("Loss: ₹%.2f\n", cost - sell);
    }
    else
    {
        printf("No Profit, No Loss.\n");
    }
}

int main()
{
    float a, b, c;
    printf("Enter coefficients a, b, and c for quadratic equation (ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Not a quadratic equation. 'a' should not be zero.\n");
    }
    else
    {
        findRoots(a, b, c);
    }

    float costPrice, sellingPrice;
    printf("\nEnter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    findProfitOrLoss(costPrice, sellingPrice);

    return SUCCESS;
}
