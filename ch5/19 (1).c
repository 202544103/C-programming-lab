#include <stdio.h>

int main() {
    double base, height;
    char choice;
    
    while (1) {
        printf("Base = ");
        scanf("%lf", &base);
        printf("Height = ");
        scanf("%lf", &height);
        
        printf("Triangle area = %.1f\n", (base * height) / 2.0);
        
        printf("Continue? ");
        scanf(" %c", &choice);
        
        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }
    
    return 0;
}