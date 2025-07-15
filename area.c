#include <stdio.h>

int main() {
    int choice;
    float length, breadth, base, height, area;

    // Display the menu
    printf("Options:\n");
    printf("1. Area of Square\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");

    // Accept user's choice
    printf("\nEnter your choice (1-3): ");
    scanf("%d", &choice);

    // Perform action based on the choice
    switch (choice) {
        case 1:
            printf("Enter the length of the square: ");
            scanf("%f", &length);
            area = length * length;
            printf("Area of Square = %.2f\n", area);
            break;

        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

