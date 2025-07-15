#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
// Program written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
#define PI 3.14
double findSurfaceArea(double height,double radius);
double findVolume(double height, double radius);

int main(){
	double height;
	double radius;
	printf("Enter the radius of the cylinder: ");
	scanf("%lf",&radius);
	printf("Enter the height of the cylinder: ");
	scanf("%lf",&height);
	double surfaceArea = findSurfaceArea(height, radius);
	double volume = findVolume(height,  radius);
	printf("The surface are of the cylinder with %f height and %f radius is %f \n",height,radius,surfaceArea);
	printf("The volume of the cylinder with %f height and %f radius is %f \n",height,radius,volume);	
}

double findSurfaceArea(double height,double radius){
	return 2*PI*pow(radius,2);
}

double findVolume(double height,double radius){
	return PI*pow(radius,2)*height;
}


