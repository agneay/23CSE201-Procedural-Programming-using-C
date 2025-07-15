#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
	//Agneay B Nair
	//CH.SC.U4CSE24102
	printf("This program was written by Agneay B Nair CH.SC.U4CSE24102");
	int num;
	printf("\nEnter any single digit number: ");
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("ONE");
			break;
		case 2:
			printf("TWO");
			break;
		case 3:
			printf("THREE");
			break;
		case 4:
			printf("FOUR");
			break;
		case 5:
			printf("FIVE");
			break;
		case 6:
			printf("SIX");
			break;
		case 7:
			printf("SEVEN");
			break;
		case 8:
			printf("EIGHT");
			break;
		case 9:
			printf("NINE");
			break;
		default:
			printf("Enter a valid single digit number");
	}
	return SUCCESS;
}
