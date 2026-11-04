#include <stdio.h>

int main() {
    int class_totals[4] = {0};
    int grand_total = 0;
    int score;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &score);
            class_totals[i] += score;
        }
        grand_total += class_totals[i];
    }
    
    for (int i = 0; i < 4; i++) {
        printf("%d\n", class_totals[i]);
    }
    printf("%d\n", grand_total);
    
    return 0;
}