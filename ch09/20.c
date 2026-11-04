#include <stdio.h>

int main() {
    int arr[5][10] = {0};
    
    arr[0][0] = 1;
    arr[0][2] = 1;
    arr[0][4] = 1;
    
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            int left = (j > 0) ? arr[i-1][j-1] : 0;
            int right = arr[i-1][j+1]; 
            arr[i][j] = left + right;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i][j] != 0 || (i == 0 && j < 5)) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}