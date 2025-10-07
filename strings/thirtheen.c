#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortStrings(char *arr[], int n)
{
    char *temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                // Swap pointers
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Code written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
    int n;
    printf("Code written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); // consume newline

    char *arr[n];
    char buffer[100];

    // Allocate memory for each string and read input
    for (int i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);

        // Remove trailing newline if any
        buffer[strcspn(buffer, "\n")] = 0;

        // Allocate memory and copy the string
        arr[i] = malloc(strlen(buffer) + 1);
        if (arr[i] == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }
        strcpy(arr[i], buffer);
    }

    // Sort strings
    sortStrings(arr, n);

    printf("\nStrings in alphabetical order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
        free(arr[i]); // Free allocated memory
    }

    return 0;
}
