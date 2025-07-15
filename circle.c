#include <stdio.h>
#define PI 3.14159

int main() {
    float radius;
    int choice;

    // Accept radius from the user
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Display menu
    printf("\nOptions:\n");
    printf("1. Area of Circle\n");
    printf("2. Circumference of Circle\n");
    printf("3. Volume of Sphere\n");

    // Accept user's choice
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Perform corresponding operation
    switch(choice) {
        case 1:
            printf("Area of Circle = %.2f\n", PI * radius * radius);
            break;

        case 2:
            printf("Circumference of Circle = %.2f\n", 2 * PI * radius);
            break;

        case 3:
            printf("Volume of Sphere = %.2f\n", (4.0 / 3.0) * PI * radius * radius * radius);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

