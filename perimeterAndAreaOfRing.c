#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

#define SUCCESS 0
#define FAIL 1
#define PI 3.14
// To Accept inner and outer radius of a ring and print the perimeter and area of the ring

int main(){
    double innerRadius, outerRadius,perimeter,area;
    printf("Enter the inner radius of the ring");
    scanf("%lf",&innerRadius);
    printf("Enter the outer radius of the ring");
    scanf("%lf",&outerRadius);

    if(innerRadius <= 0 || outerRadius <= 0){
        printf("Inner and outer radius must be positive numbers.\n");
        return FAIL;
    }else if(innerRadius >= outerRadius){
        double temp = innerRadius;
        innerRadius = outerRadius;
        outerRadius = temp;
    }

    perimeter = 2*PI*(innerRadius + outerRadius);
    area = PI*(pow(outerRadius,2) - pow(innerRadius,2));

    printf("The perimeter of the ring with inner radius %lf and outer radius %lf is %lf \n",innerRadius,outerRadius,perimeter);
    printf("The area of the ring with inner radius %lf and outer radius %lf is %lf \n",innerRadius,outerRadius,area);
    return SUCCESS;
}
