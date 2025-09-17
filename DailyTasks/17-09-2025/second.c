#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int (*addPtr)(int, int) = add;
    int (*subPtr)(int, int) = subtract;
    int (*multiplyPtr)(int, int) = multiply;

    int a = 10;
    int b = 5;
    printf("Add: %d\nSubtract: %d\nMultiply: %d\n", addPtr(a, b), subPtr(a, b), multiplyPtr(a, b));
    return 0;
}