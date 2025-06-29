// To accept a character from user and print it's previous character

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

#define SUCCESS 0
#define FAIL 1

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    printf("The previous character of %c is %c \n",ch,ch-1);
    return SUCCESS;
}
