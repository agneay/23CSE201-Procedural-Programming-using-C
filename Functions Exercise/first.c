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
	bool run = true;
	char character;
	printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");
	while (run)
	{
		printf("Enter any character: ");
		scanf(" %c", &character);

		printf("1. ISUPPER\n2. ISLOWER\n3. ISDIGIT\n4. EXIT\n5. ISALPHABET\n");
		printf("\nEnter Your Choice [1-5]: ");
		int choice;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			if (isupper(character))
				printf("%c is in uppercase\n", character);
			else
				printf("%c is not in uppercase\n", character);
			break;
		case 2:
			if (islower(character))
				printf("%c is in lowercase\n", character);
			else
				printf("%c is not in lowercase\n", character);
			break;
		case 3:
			if (isdigit(character))
				printf("%c is a digit\n", character);
			else
				printf("%c is not a digit\n", character);
			break;
		case 5:
			if (isalpha(character))
				printf("%c is an alphabet\n", character);
			else
				printf("%c is not an alphabet\n", character);
			break;
		case 4:
			run = false;
			break;
		default:
			printf("Enter a valid choice\n");
			break;
		}
	}

	return SUCCESS;
}
