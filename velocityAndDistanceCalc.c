#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    double initialVelocity,acceleration,time,velocity,distance;
    printf("Enter your Initial Velocity (m//s): ");
    scanf("%lf",&initialVelocity);

    printf("Enter your Acceleration (m//s^2): ");
    scanf("%lf",&acceleration);

    printf("Enter your Time (s): ");
    scanf("%lf",&time);

    velocity = initialVelocity + (acceleration * time);
    distance = (initialVelocity * time) + (0.5 * acceleration * time * time);

    printf("Your Velocity is: %.2lf m/s\n", velocity);
    printf("Your Distance is: %.2lf m\n", distance);

    return SUCCESS;
}