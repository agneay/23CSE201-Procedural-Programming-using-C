#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int main() {
  int (*funcPtr)(int,int) = add;
  int result = funcPtr(2,3);
  printf("%d",result);

    return 0;
}