#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAIL 1

typedef struct{
    int x;
    int y;
}Point;

int main(){
    Point P1,P2;
    printf("Enter the X-co-ordinate of the first point: ");
    scanf("%d",&P1.x);
    printf("Enter the Y-co-ordinate of the first point: ");
    scanf("%d",&P1.y);

    printf("Enter the X-co-ordinate of the second point: ");
    scanf("%d",&P2.x);
    printf("Enter the Y-co-ordinate of the second point: ");
    scanf("%d",&P2.y);

    int distance = pow((pow((P2.x-P1.x),2) - pow((P2.y - P1.x),2)),0.5);

    printf("The distance betweeen (%d,%d) and (%d,%d) is %d \n",P1.x,P1.y,P2.x,P2.y,distance);
 
    return SUCCESS;
}