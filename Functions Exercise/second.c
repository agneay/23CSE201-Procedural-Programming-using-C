#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main()
{
	printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");
	printf("Enter any character: ");
	char character;
	scanf(" %c", &character);
	if (isalnum(character))
	{

		if (isdigit(character))
		{
			printf("%c is a digit\n", character);
		}

		if (isalpha(character))
		{
			if (isupper(character))
			{
				printf("%c is in Uppercase\n", character);
				character = tolower(character);
				printf("After converting: %c", character);
				return SUCCESS;
			}

			if (islower(character))
			{
				printf("%c is in lower case\n", character);
				character = toupper(character);
				printf("After converting: %c", character);
				return SUCCESS;
			}
		}
		if (ispunct(character) || isspace(character))
		{
			printf("%c is a special character\n", character);
			return SUCCESS;
		}
	}

	return SUCCESS;
}
