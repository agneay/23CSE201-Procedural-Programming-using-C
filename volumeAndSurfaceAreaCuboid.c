#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

#define SUCCESS 0
#define FAIL 1

int main(){
    float length,breadth,height,surface_area,volume;

    printf("Enter the lenght of the cuboid: ");
    scanf("%f",&length);

    printf("Enter the breadth of the cuboid: ");
    scanf("%f",&breadth);

    printf("Enter the height of the cuboid: ");
    scanf("%f",&height);

    volume = length*breadth*height;
    surface_area = 2*(length*breadth + length*height + breadth*height);

    printf("The volume of the cuboid is %.3f \n",volume);
    printf("The surface area of the cuboid is %.3f \n",surface_area);

    return SUCCESS;
}
