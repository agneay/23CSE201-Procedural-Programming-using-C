#include <stdio.h>

#define SUCCESS 0
#define FAILURE -1

/*
Program written by Agneay B Nair
Roll No: CH.SC.U4CSE24102
*/
int main()
{
    printf("Program written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102");
    int arr[] = {10, 20, 30, 40, 50};
    int *p1 = arr;     // points to arr[0]
    int *p2 = arr + 4; // points to arr[4] (last element)

    printf("Array: 10 20 30 40 50\n\n");

    // 1. Pointer increment
    printf("p1 points to %d\n", *p1); // arr[0] = 10
    p1++;
    printf("After p1++ it points to %d\n\n", *p1); // arr[1] = 20

    // 2. Pointer decrement
    p1--;
    printf("After p1-- it points back to %d\n\n", *p1); // arr[0] = 10

    // 3. Pointer addition
    printf("*(p1 + 2) = %d\n\n", *(p1 + 2)); // arr[2] = 30

    // 4. Pointer subtraction
    printf("*(p2 - 3) = %d\n\n", *(p2 - 3)); // arr[1] = 20

    // 5. Difference between pointers
    int diff = p2 - p1;
    printf("p2 - p1 = %d (number of elements apart)\n\n", diff);

    // 6. Pointer comparison
    if (p1 < p2)
        printf("p1 is before p2 in the array.\n");
    else
        printf("p1 is not before p2.\n");

    return 0;
}
