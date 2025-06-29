#include <stdio.h>
#include <math.h>

int main() {
    // Part 1: Quadratic Equation Roots
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c for the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    printf("\nQuadratic Equation Roots:\n");

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("The roots are real and equal: %.2f\n", root1);
    } 
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and imaginary:\n");
        printf("%.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    // Part 2: Profit or Loss Calculation
    float costPrice, sellingPrice, profitOrLoss;

    printf("\nEnter the Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    printf("\nProfit or Loss Calculation:\n");

    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        printf("Profit made: %.2f\n", profitOrLoss);
    } 
    else if (costPrice > sellingPrice) {
        profitOrLoss = costPrice - sellingPrice;
        printf("Loss incurred: %.2f\n", profitOrLoss);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
