
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int n = 0;
    printf("Enter the number of books on each self: ");
    scanf("%d", n);
    int noOfBooks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number of books you wish to save in %dth shelf", i);
        scanf("%d", &noOfBooks[i]);
    }
    printf("Enter the Books below: ");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<noOfBooks[i];j++){
            printf("Enter the book ");
        }
    }
    return SUCCESS;
}