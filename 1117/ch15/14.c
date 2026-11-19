#include <stdio.h>
#include <string.h>

struct Contact {
    char name[110];
    char tel[110];
    char addr[110];
};

int main() {
    struct Contact contacts[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%s %s %s", contacts[i].name, contacts[i].tel, contacts[i].addr);
    }
    
    int min_index = 0;
    for (int i = 1; i < 3; i++) {
        if (strcmp(contacts[i].name, contacts[min_index].name) < 0) {
            min_index = i;
        }
    }
    
    printf("name : %s\n", contacts[min_index].name);
    printf("tel : %s\n", contacts[min_index].tel);
    printf("addr : %s\n", contacts[min_index].addr);
    
    return 0;
}