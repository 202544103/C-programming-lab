#include <stdio.h>

int main() {
    int scores[3][3];
    int student_totals[3] = {0};
    int subject_totals[3] = {0};
    int grand_total = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
            student_totals[i] += scores[i][j];
            subject_totals[j] += scores[i][j];
        }
        grand_total += student_totals[i];
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("%d\n", student_totals[i]);
    }
    
    for (int j = 0; j < 3; j++) {
        printf("%d ", subject_totals[j]);
    }
    printf("%d\n", grand_total);
    
    return 0;
}