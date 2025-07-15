#include<stdio.h>

int main(){
    int arr[] = {1,2,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int temp;
    int dummyLen  = len;
    for(int i = 0;i<=len-1;i++){
        temp = arr[dummyLen-1];
        arr[dummyLen] = arr[i];
        arr[i] = temp;

        dummyLen--;
        
    }
    for(int i = 0;i<=len-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}