#include <stdio.h>

int main() {
    int n;
    int max = 0;
    int min = 101;
    
    while (1) {
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        if (n >= 1 && n <= 100) {
            if (n > max) {
                max = n;
            }
            if (n < min) {
                min = n;
            }
        }
    }
    
    printf("%d\n", max);
    printf("%d\n", min);
    
    return 0;
}