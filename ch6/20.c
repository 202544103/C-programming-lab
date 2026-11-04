#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int val;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        sum += val;
    }
    
    printf("%.2f\n", (double)sum / n);
    
    return 0;
}