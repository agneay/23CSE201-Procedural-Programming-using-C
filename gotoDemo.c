#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        goto EVEN;
    else
        goto ODD;

        
    EVEN:
        printf("%d number is even \n",num);
        return 0;
    ODD:
        printf("%d number is odd \n",num);
        return 0;
}