#include <stdio.h>

struct Person {
    char name[25];
    int height;
    int weight;
};

int main() {
    struct Person people[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d", people[i].name, &people[i].height, &people[i].weight);
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (people[j].height > people[j+1].height) {
                struct Person temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%s %d %d\n", people[i].name, people[i].height, people[i].weight);
    }
    
    return 0;
}