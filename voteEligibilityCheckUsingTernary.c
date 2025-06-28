// To check if a person is eligible to vote using a ternary operator
#include <stdio.h>
// This program was written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102
int main() {
    int age;
    printf("This progam was written by Agneay B Nair\n Roll No: CH.SC.U4CSE24102\n");

    // Input the age of the person
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility using a ternary operator
    (age >= 18) ? printf("You are eligible to vote.\n") : printf("You are not eligible to vote.\n");

    return 0;
}