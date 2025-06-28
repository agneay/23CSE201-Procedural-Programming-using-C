#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>

double convertToCelsius(double farenheith);
double convertToKelvin(double celsius);

int main()
{
    double farenheith, celsius, kelvin;
    printf("Enter the temperature in Farenheith: ");
    scanf("%lf", &farenheith);
    celsius = convertToCelsius(farenheith);
    kelvin = convertToKelvin(celsius);
    printf("The temperature in Celsius is %lf \n", celsius);
    printf("The temperature in Farenheith is %lf \n", farenheith);
    return 0;
}

double convertToCelsius(double farenheith)
{
    return 5.0 / 9.0 * (farenheith - 32);
}

double convertToKelvin(double celsius)
{
    return celsius + 273.15;
}
