#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;

    printf("Enter marks for three subjects:\n");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    average = (mark1 + mark2 + mark3) / 3;

    printf("Average Marks: %.2f\n", average);

    printf("Class Obtained: ");

    if (average >= 75) {
        printf("Distinction\n");
    } 
    else if (average >= 60) {
        printf("First Class\n");
    } 
    else if (average >= 50) {
        printf("Second Class\n");
    } 
    else if (average >= 40) {
        printf("Pass Class\n");
    } 
    else {
        printf("Fail\n");
    }

    return 0;
}
