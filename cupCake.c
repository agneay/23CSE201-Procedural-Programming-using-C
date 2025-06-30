#include <stdio.h>

int main() {
    int N;
    
    // Read the number of cupcakes
    scanf("%d", &N);
    
    // The optimal package size to maximize leftover cupcakes is always N/2 + 1
    int package_size = (N / 2) + 1;

    printf("%d\n", package_size);

    return 0;
}
