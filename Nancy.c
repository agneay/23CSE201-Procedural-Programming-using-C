#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    int amtGiven,amtSpecified;
    printf("The amount Given is: ");
    scanf("%d",&amtGiven);
    printf("The amount specified by the shopkeeper is: ");
    scanf("%d",&amtSpecified);
    int quotient = amtGiven/amtSpecified;
    int remainder = amtGiven % amtSpecified;
    printf("The quotient is %d  \n",quotient);
    printf("The remainder is %d \n",remainder);
    return SUCCESS;
}