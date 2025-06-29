#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

#define SUCCESS 0
#define FAILURE 1


int main(){
    char ch;
    Type chType;
    printf("Enter any character: ");
    scanf(" %c",&ch);

    // Check for vowels (both lowercase and uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character '%c' is a vowel.\n", ch);
    } 
    // Check if it's an alphabet character and not a vowel
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character '%c' is a consonant.\n", ch);
    } 
    else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return SUCCESS;
}