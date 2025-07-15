#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

#define SUCCESS 1
#define FAILURE 0

int main(){
	// Agneay B Nair
	// Roll no: CH.SC.U4CSE24102
	printf("The program was done by Agneay B Nair CH.SC.U4CSE24102");
	printf("\nEnter any raindow color character");
	char ch;
	scanf("%c",&ch);
	switch(ch){
		case 'V':
			printf("Violet\n");
			break;
		case 'I':
			printf("Indigo\n");
			break;
		case 'B':
			printf("Blue\n");
			break;
		case 'G':
			printf("Green\n");
			break;
		case 'Y':
			printf("Yellow\n");
			break;
		case 'O':
			printf("Orange\n");
			break;
		case 'R':
			printf("Red\n");
			break;
		default:
			printf("Please enter a valid char in UPPER CASE");
	}
	return SUCCESS;
}
