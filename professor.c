#include <stdio.h>
#include <math.h>

int main() {
    double B, LS, minRS, maxRS;
    
    scanf("%lf %lf", &B, &LS);
    
    minRS = sqrt(LS * LS - B * B);
    maxRS = LS;
    
    printf("%.2lf %.2lf\n", minRS, maxRS);
    
    return 0;
}
