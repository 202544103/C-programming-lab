#include <stdio.h>

int main() {
    int choice;
    
    while (1) {
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("You selected Input.\n");
                break;
            case 2:
                printf("You selected Output.\n");
                break;
            case 3:
                printf("You selected Delete.\n");
                break;
            case 4:
                printf("You selected Finish.\n");
                return 0;
            default:
                printf("Wrong input.\n");
                break;
        }
    }
    
    return 0;
}