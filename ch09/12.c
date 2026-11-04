#include <stdio.h>

int main() {
    int score;
    
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score);
            sum += score;
        }
        double avg = (double)sum / 4.0;
        printf("%d %.1f\n", sum, avg);
    }
    
    return 0;
}