#include <stdio.h>

int main() {
    int n;
    int count = 0;
    int sum = 0;
    
    while (1) {
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        sum += n;
        count++;
    }
    
    printf("%d\n", count);
    printf("%d\n", sum);
    printf("%.2f\n", (double)sum / count);
    
    return 0;
}