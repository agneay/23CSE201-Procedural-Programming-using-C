#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

// Defining Function prototype
void convert_to_oct(int num);
void convert_to_hex(int num);
void convert_to_bin(int num);

int main()
{
    bool res = true;
    do
    {
        int decimal_no;
        printf("Enter the Decimal Number: ");
        scanf("%d", decimal_no);
        printf("-----MENU-------\n");
        printf("1.Convert to Binary\n2.Convert to Octal\n3.Convert to Hexadecimal\n4.Exit\n");
        int choice = 0;
        printf("Enter the number System to wich you want %d to be converted into: ", decimal_no);
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            convert_to_bin(decimal_no);
            break;
        case 2:
            convert_to_oct(decimal_no);
            break;
        case 3:
            convert_to_hex(decimal_no);
            break;
        case 4:
            res = false;
            exit(0);
            break;
        default:
            printf("Enter a valid choice[1-4]");
            break;
        }
    } while (res);

    return SUCCESS;
}

void convert_to_bin(int num)
{
    int dummy = num, sum = 0;
    while (dummy)
    {
        int rem = dummy % 2;
        sum = sum * 10 + rem;
        dummy /= 2;
    }
    printf("The binary of the number %d is %d", num, sum);
}
void convert_to_oct(int num)
{
    int dummy = num, sum = 0;
    while (dummy)
    {
        int rem = dummy % 8;
        sum = sum * 10 + rem;
        dummy /= 8;
    }
    printf("The Octal of the number %d is %d", num, sum);
}
void convert_to_hex(int num)
{
    int dummy = num, sum = 0;
    while (dummy)
    {
        int rem = dummy % 16;
        sum = sum * 10 + rem;
        dummy /= 16;
    }
    printf("The Hex of the number %d is %d", num, sum);
}