#include <stdio.h>

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

// Function to calculate power (x^y)
double power(double x, int y)
{
    double result = 1;
    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }
    return result;
}

// Function to calculate factorial (n!)
long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// Function to calculate sum of first n terms of Taylor series of e^x
double taylorSeries(double x, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += power(x, i) / (double)factorial(i);
    }
    return sum;
}

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    double result = taylorSeries(x, n);

    printf("The sum of the first %d terms of the Taylor series for e^%.2f is: %.6f\n", n, x, result);

    return 0;
}
