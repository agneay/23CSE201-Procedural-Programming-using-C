#include <stdio.h>
#include <stdlib.h>

// Program Written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

#define SUCCESS 0
#define FAILURE -1

// 1. No arguments, No return Type
void print1()
{
    printf("==================\n");
    printf("Hello World\n");
    printf("==================\n");
}

// 2.With arguments, No return value
void print2(char s[])
{
    printf("============\n");
    printf("%s\n", s);
    printf("============\n");
}

// 3. No arguments, with return value
char *print3()
{
    return "Hello World";
}

// 4. With Argument, with return value
char *print4(char *s)
{
    return s;
}

int main()
{
    printf("Program Written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    // 1. No args, no return
    printf("\n--- Case 1: No args, no return ---\n");
    print1();

    // 2. With args, no return
    printf("\n--- Case 2: With args, no return ---\n");
    print2("Hello World");

    // 3. No args, with return
    printf("\n--- Case 3: No args, with return ---\n");
    printf("=======\n");
    printf("%s\n", print3()); // function returns the string
    printf("=======\n");

    // 4. With args, with return
    printf("\n--- Case 4: With args, with return ---\n");
    printf("=======\n");
    printf("%s\n", print4("Hello World")); // function returns what it receives
    printf("=======\n");
    return SUCCESS;
}