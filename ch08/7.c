#include <stdio.h>

int main() {
    int month;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (1) {
        scanf("%d", &month);
        if (month < 1 || month > 12) {
            break;
        }
        printf("%d\n", days[month]);
    }

    return 0;
}