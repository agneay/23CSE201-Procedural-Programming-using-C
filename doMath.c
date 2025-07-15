#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

#define SUCCESS 0
#define FAILURE 1

int doOperation(int num1,int num2,char op){
	switch(op){
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			return num1/num2;
			break;
		default:
			printf("Enter valid operation ");
			break;
	}
	return -1;
}


int main(){
	char op;
	int num1,num2;
	printf("This program was done by Agneay B Nair CH.SC.U4CSE24102\n");
	//Agneay B Nair
	//CH.SC.U4CSE24102
	printf("Enter the first number you want to perform operation on: ");
	scanf("%d",&num1);
	printf("Enter the Second number you want to perform operation on: ");
	scanf("%d",&num2);
	printf("Enter the operation you want to perform: ");
	scanf(" %c",&op);

	int result = doOperation(num1,num2,op);
	printf("The result is %d :",result);
	return SUCCESS;
}
