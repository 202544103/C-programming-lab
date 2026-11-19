#include <stdio.h>

struct Person {
    char name[25];
    int height;
};

int main() {
    struct Person people[5];
    int min_index = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%s %d", people[i].name, &people[i].height);
        if (i > 0 && people[i].height < people[min_index].height) {
            min_index = i;
        }
    }
    
    printf("%s %d\n", people[min_index].name, people[min_index].height);
    
    return 0;
}