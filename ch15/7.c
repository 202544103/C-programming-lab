#include <stdio.h>

struct Student {
    char name[25];
    int score;
};

int main() {
    struct Student students[5];
    int max_index = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%s %d", students[i].name, &students[i].score);
        if (i > 0 && students[i].score > students[max_index].score) {
            max_index = i;
        }
    }
    
    printf("%s %d\n", students[max_index].name, students[max_index].score);
    
    return 0;
}