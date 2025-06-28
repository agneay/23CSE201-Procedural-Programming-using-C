#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int digitCount(int num);
bool checkAmstrong(int num);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    bool res = checkAmstrong(num);
    if (res)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}

int digitCount(int num)
{
    int count = 0;
    int dummy = num;

    if (dummy == 0)
        return 1; // Special case for 0

    while (dummy != 0)
    {
        dummy /= 10;
        count++;
    }
    return count;
}

bool checkAmstrong(int num)
{
    int numSize = digitCount(num); // Correct variable
    int dummy = num;
    int condition = 0;

    while (dummy != 0)
    {
        int extract = dummy % 10;
        condition += (int)pow(extract, numSize); // Typecast to int
        dummy /= 10;
    }

    return (condition == num);
}
