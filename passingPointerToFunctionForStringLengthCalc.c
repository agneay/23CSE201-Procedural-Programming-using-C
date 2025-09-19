#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Program was written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/
int calcLength(char *stringA)
{
    return strlen(stringA);
}
void runFunc(int (*funcPtr)(char *))
{
    char str[] = "Agneay";
    int len = funcPtr(str); // call the function via pointer
    printf("Length of \"%s\" = %d\n", str, len);
}

int main()
{
    printf("The program is written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int (*funcPtr)(char *) = calcLength;
    runFunc(funcPtr);
}
