#include <stdio.h>
#include <ctype.h>
int main()
{
    // Program was written by Agneay B Nair
    // Roll No: CH.SC.U4CSE24102
    printf("Program was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
    printf("Lowercase: %s\n", str);
    return 0;
}
