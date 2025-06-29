#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    float amt, unitConsumed,costPerUnit;
    printf("The total units consumed is: ");
    scanf("%f",&unitConsumed);
    printf("The total cost per unit is: ");
    scanf("%f",&costPerUnit);

    amt = pow(unitConsumed,costPerUnit);
    printf("Hence the total amount to be paid is %f \n",amt);
    return SUCCESS; 
}