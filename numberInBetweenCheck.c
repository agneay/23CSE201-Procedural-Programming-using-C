#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    int a[3];
    for(int i = 0;i<=sizeof(a)/sizeof(int) - 1;i++){
        printf("Enter the %d integer: ",i);
        scanf("%d",&a[i]);
    }
    if(a[0]>=a[1] && a[0]<=a[2]){
        printf("%d is in between %d and %d \n",a[0],a[1],a[2]);
    }else{
        printf("%d is NOT in between %d and %d \n",a[0],a[1],a[2]);
    }
    return SUCCESS;
}