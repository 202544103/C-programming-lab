#include <stdio.h>

int main() {
    int n;
    int even_count = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        
        if (n % 2 == 0) {
            even_count++;
        }
    }
    
    printf("%d\n", even_count);
    
    return 0;
}