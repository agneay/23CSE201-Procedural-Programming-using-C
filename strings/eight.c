#include<stdio.h>
#include<string.h>

#define SUCCESS 0
#define FAILURE -1

// Code written by Agneay B Nair
// Roll No: CH.SC.U4CSE24102

int main(){
    printf("Code was written by Agneay B Nair\nRoll No: CH.SC.U4CSE24102\n");
    int n;
    printf("Enter how many characters you want in your string: ");
    scanf("%d",&n);
    char c[n+1];
    printf("Enter your  String: ");
    scanf("%s",c);
    int left = 0;
    int right = strlen(c) - 1;
    bool flag = false;
    while(right > left){
        if(c[right] != c[left])
            flag = true;
            break;
        right--;
        left++;
    }
    (flag)?printf(""):printf("");
    return FAILURE;
}