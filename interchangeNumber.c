#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1
// To accept two numbers from user and interchange and print them
typedef struct{
    int x;
    int y;
}build;

build interchangeBuild(build myBuild);

int main(){

    build myBuild;

    printf("Enter your first number: ");
    scanf(" %d",&myBuild.x);
    printf("Enter your second number: ");
    scanf("%d",&myBuild.y);

    printf("The numbers before interchaning are %d and %d \n",myBuild.x,myBuild.y);

    build myNewBuild = interchangeBuild(myBuild);

    printf("The numbers after interchanging are %d and %d \n",myNewBuild.x,myNewBuild.y);
    return SUCCESS;
}

build interchangeBuild(build myBuild){
    int temp = myBuild.y;
    myBuild.y = myBuild.x;
    myBuild.x = temp;

    return myBuild;
}
