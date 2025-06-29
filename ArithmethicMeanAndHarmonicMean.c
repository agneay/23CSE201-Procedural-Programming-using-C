#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

#define SUCCESS 0
#define FAIL 1

// To accept two numbers and print arithmetic and harmonic mean of the two numbers

int main(){
    int a,b;
    printf("Enter the value of the first number: ");
    scanf("%d",&a);
    printf("Enter the value of the second number: ");
    scanf("%d",&b);

    double AM = (a+b)/2,HM=(a*b)/(a+b);
    printf("The Arithmethic mean of %d and %d is %.2lf \n",a,b,AM);
    printf("The Harmonic Mean of %d and %d is %.2lf \n",a,b,HM);
    return SUCCESS;
}
