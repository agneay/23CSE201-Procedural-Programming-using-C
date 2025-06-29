#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

#define SUCCESS 0
#define FAILURE 1

int main(){
    int x;
    int y;
    printf("Enter the x co-ordinate of the point");
    scanf("%d",&x);
    printf("Enter the y-co-ordinate of the point");
    scanf("%d",&y);
    if(x > 0 && y >0)printf("The point (%d,%d) belongs to the 1st quadrant",x,y);
    else if(x<0 && y<0)printf("The point (%d,%d) belongs to the 3rd quadrant",x,y);
    else if(x>0 && y<0)printf("The point (%d,%d) belongs to the 4th quadrant",x,y);
    else printf("The point (%d,%d) belongs to the 2nd quadrant",x,y);
    return SUCCESS;
}