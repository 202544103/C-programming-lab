#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int multi_count = 0;
    int sum = 0;
    
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break;
        }
        count++;
    }
    
    for (int i = 0; i < count; i++) {
        if (arr[i] % 5 == 0) {
            multi_count++;
            sum += arr[i];
        }
    }
    
    double avg = multi_count > 0 ? (double)sum / multi_count : 0.0;
    
    printf("Multiples: %d\n", multi_count);
    printf("Sum: %d\n", sum);
    printf("Avg: %.1f\n", avg);
    
    return 0;
}