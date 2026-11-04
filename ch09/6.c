#include <stdio.h>

int main() {
    int arr[100];
    arr[0] = 100;
    scanf("%d", &arr[1]);
    
    int k = 2;
    while (1) {
        arr[k] = arr[k-2] - arr[k-1];
        if (arr[k] < 0) {
            break;
        }
        k++;
    }
    
    for (int i = 0; i <= k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}