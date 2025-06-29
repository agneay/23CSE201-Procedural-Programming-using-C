#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    float num1, num2;
    printf("Enter the first floating number: ");
    scanf("%f",&num1);
    printf("Enter the second floating number: ");
    scanf("%f",&num2);

    float mult = num1*num2;
    printf("The product of %.2f and %.2f is %.4f \n",num1,num2,mult);
    return SUCCESS;
}