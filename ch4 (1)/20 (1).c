#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n > 0) {
        printf("plus\n");
    } else if (n < 0) {
        printf("minus\n");
    } else {
        printf("zero\n");
    }
    
    return 0;
}