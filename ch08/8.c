#include <stdio.h>

int main() {
    double scores[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int c1, c2;
    
    scanf("%d %d", &c1, &c2);
    
    double sum = scores[c1 - 1] + scores[c2 - 1];
    
    printf("%.1f\n", sum);
    
    return 0;
}