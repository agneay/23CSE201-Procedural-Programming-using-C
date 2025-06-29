#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    //Get two numbers from the user in double format and print the sum as with 3 decimal points
    int num1, num2, num3,sum;
    printf("Enter number of tickets booked the first time: ");
    scanf("%d", &num1);
    printf("Enter number of tickets booked the second time ");
    scanf("%d", &num2);
    printf("Enter number of tickets booked the third time ");
    scanf("%d", &num3);
    sum = num1 + num2+ num3;
    printf("Sum: %d\n", sum);
    return SUCCESS;
}