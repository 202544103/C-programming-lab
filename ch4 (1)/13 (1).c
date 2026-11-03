#include <stdio.h>

int main() {
    int choice;
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("ADD\n");
    } else if (choice == 2) {
        printf("EDIT\n");
    } else if (choice == 3) {
        printf("DEL\n");
    }
    
    return 0;
}