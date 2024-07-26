#include <stdio.h>

int main(void) {
    
    int g1;
    int g2;
    int g3;
    int g4;
    int avg;
    
    printf("QUARTER 1: ");
    scanf("%d", &g1);
    
    printf("QUARTER 2: ");
    scanf("%d", &g2);
    
    printf("QUARTER 3: ");
    scanf("%d", &g3);
    
    printf("QUARTER 4: ");
    scanf("%d", &g4);
    
    avg = (g1 + g2 + g3 + g4)/4;
    printf("FINAL AVERAGE: %d", avg);
    
    return 0;
}
