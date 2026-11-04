#include <stdio.h>

int main() {
    int a, b;
    int min, max;
    int sum = 0;
    int count = 0;
    
    scanf("%d %d", &a, &b);
    
    if (a <= b) {
        min = a;
        max = b;
    } else {
        min = b;
        max = a;
    }
    
    for (int i = min; i <= max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }
    
    printf("sum : %d\n", sum);
    if (count > 0) {
        printf("avg : %.1f\n", (double)sum / count);
    } else {
        printf("avg : 0.0\n");
    }
    
    return 0;
}