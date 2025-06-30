#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    float num1,num2;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);

    double dnum1 = (double) num1;
    double dnum2 = (double) num2;

    printf("The converted numbers in double are: \n %lf \n %lf \n",num1,num2);
    return SUCCESS;
}