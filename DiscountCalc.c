#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float amount;
    printf("Enter your purchase amount: ");
    scanf("%f", &amount);

    float discount = 0.0;
    if (amount > 5000)
    {
        discount = (15.0 / 100.0) * amount;
    }
    else
    {
        discount = (10.0 / 100.0) * amount;
    }
    float finalAmt = amount - discount;
    printf("Your final amount after %f discount is %f \n", discount, finalAmt);
    return 0;
}