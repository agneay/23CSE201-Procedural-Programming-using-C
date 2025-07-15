#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

// Program written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

#define SUCCESS 0
#define FAILURE -1

int main(){
	int n;
	printf("Enter any number n: ");
	scanf("%d",&n);
	for(int i = 0; i<=n;i++){
		if(i%2 == 0){
			printf("%d\n",i);
		}
	}
	return SUCCESS;
}
