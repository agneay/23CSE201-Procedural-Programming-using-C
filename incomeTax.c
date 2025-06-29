#include<stdio.h>

int main(){
    float sal;
    printf("Enter you basic salary: ");
    scanf("%f",&sal);
    float tax;
    if(sal<150000) tax = 0;
    else if(sal>150000 && sal<300000) tax = 20/100 * sal;
    else tax = 30/100 * sal; 
    return 0;
}