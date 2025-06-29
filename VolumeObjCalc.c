#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    short int length,width,height;
    printf("Enter the lenght of the object: ");
    scanf("%hd",&length);
    printf("Enter the width of the object: ");
    scanf("%hd",&width);
    printf("Enter the height  of the object: ");
    scanf("%hd",&height);
    int surface_area = 2*(width*length + length*height + height*width);
    printf("The surface area of the object is: %d \n",surface_area);

    return SUCCESS;
}