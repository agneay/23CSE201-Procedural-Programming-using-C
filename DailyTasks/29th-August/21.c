#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

void functionCall();

int main()
{
    functionCall();
    functionCall();
    functionCall();
    return SUCCESS;
}

void functionCall()
{
    static int count = 0;
    printf("The function was called %d times\n", ++count);
}