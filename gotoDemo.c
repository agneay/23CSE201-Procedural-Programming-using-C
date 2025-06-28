#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE241O2

int main(){
    printf("This code was written by Agneay B Nair \n Roll No: CH.SC.U4CSE24102 \n");

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