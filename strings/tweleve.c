#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *findSubstring(char *str, char *substr)
{
    char *p1, *p2, *p1_advance;

    if (!*substr) // Empty substring check
        return str;

    for (; *str != '\0'; str++)
    {
        p1 = str;
        p2 = substr;

        while (*p1 && *p2 && (*p1 == *p2))
        {
            p1++;
            p2++;
        }

        if (*p2 == '\0') // Reached end of substring, match found
            return str;
    }

    return NULL; // Not found
}

// Code written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    char str[100], substr[50];
    char *result;
    printf("Code written by Agneay B Nair\nRoll no: CH.SC.U4CSE24102");
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring to find: ");
    fgets(substr, sizeof(substr), stdin);

    // Remove newline characters from fgets input if present
    str[strcspn(str, "\n")] = 0;
    substr[strcspn(substr, "\n")] = 0;

    result = findSubstring(str, substr);

    if (result)
    {
        printf("Substring found at position: %ld\n", result - str);
    }
    else
    {
        printf("Substring not found\n");
    }

    return 0;
}
