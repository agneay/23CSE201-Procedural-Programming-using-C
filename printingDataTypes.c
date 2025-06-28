#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int num = 4;
    double numd = 4.05;
    float numf = 4.05f;
    char letter = 'A';
    bool isTrue = true;
    char str[] = "Hello, World!";
    long numl = 1234567890L;
    long long numll = 1234567890123456789LL;
    short numsh = 12345;
    unsigned int numui = 3000000000U;
    unsigned long numul = 4000000000UL;
    unsigned long long numull = 5000000000000000000ULL;
    signed char numsc = -100;
    signed short numssh = -20000;
    signed long numscl = -3000000000L;
    signed long long numscll = -4000000000000000000LL;
    void *ptr = &num;
    float arr[] = {1.1f, 2.2f, 3.3f};

    printf("Integer: %d\n", num);
    printf("Double: %lf\n", numd);
    printf("Float: %f\n", numf);
    printf("Character: %c\n", letter);
    printf("Boolean: %s\n", isTrue ? "true" : "false");
    printf("String: %s\n", str);
    printf("Long: %ld\n", numl);
    printf("Long Long: %lld\n", numll);
    printf("Short: %hd\n", numsh);
    printf("Unsigned Integer: %u\n", numui);
    printf("Unsigned Long: %lu\n", numul);
    printf("Unsigned Long Long: %llu\n", numull);
    printf("Signed Char: %d\n", numsc);
    printf("Signed Short: %hd\n", numssh);
    printf("Signed Long: %ld\n", numscl);
    printf("Signed Long Long: %lld\n", numscll);
    printf("Pointer: %p\n", ptr);

}