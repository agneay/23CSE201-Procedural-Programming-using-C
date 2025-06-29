#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    //Get two numbers from the user in double format and print the sum as with 3 decimal points
    double num1, num2, sum;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    sum = num1 + num2;
    printf("Sum: %.3lf\n", sum);
    return SUCCESS;
}