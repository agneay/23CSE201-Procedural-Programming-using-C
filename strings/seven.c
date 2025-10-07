#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define SUCCESS 0
#define FAILURE -1

// Code written by Agneay B Nair
// Roll No: CH.CS.U4CSE24102

bool isVowel(char s)
{
    switch (tolower(s))
    {
    case 'a':
        return true;
    case 'e':
        return true;
    case 'i':
        return true;
    case 'o':
        return true;
    case 'u':
        return true;
    default:
        return false;
    }
}
int main()
{
    printf("Program written by Agneay B Nair\nRoll No: CH.SC.U4CSE24012\N") int n;
    printf("Enter the number of characters to be allowccated for the string: ");
    scanf("%d", &n);
    char c[n + 1];
    printf("Enter Your String: ");
    scanf("%s", c);
    char *ptr = c;
    int countVowel = 0, countConso = 0;
    while (*ptr != '\0')
    {
        if (isVowel(*ptr))
            countVowel++;
        else
            countConso++;
        ptr++;
    }
    printf("For the string %s\nThe numbesr of vowels are: %d\nThe number of consonants are : %d\n", c, countVowel, countConso);
    return SUCCESS;
}