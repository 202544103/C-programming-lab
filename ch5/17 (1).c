#include <stdio.h>

int main() {
    int score;
    int sum = 0;
    int count = 0;
    
    while (1) {
        scanf("%d", &score);
        
        if (score < 0 || score > 100) {
            break;
        }
        
        sum += score;
        count++;
    }
    
    if (count > 0) {
        printf("%d\n", sum);
        printf("%.1f\n", (double)sum / count);
    }
    
    return 0;
}