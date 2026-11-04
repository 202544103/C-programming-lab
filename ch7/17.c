#include <stdio.h>

int main() {
    int n;
    char ch = 'A';
    int num = 0;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%c ", ch++);
        }
        for (int j = 1; j <= i - 1; j++) {
            printf("%d", num++);
            if (j < i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}