#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1

bool checkLeap(int year);

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    bool res = checkLeap(year);
    (res)? printf("%d is a leap year",year) : printf("%d is not a leap year",year);
    return SUCCESS;
}

bool checkLeap(int year){
    return(((year % 4 == 0) && (year % 100 != 0)) ||  (year % 400 == 0));
}