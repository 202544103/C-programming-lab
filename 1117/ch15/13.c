#include <stdio.h>

struct Contact {
    char name[110];
    char tel[110];
    char addr[110];
};

int main() {
    struct Contact c;
    
    scanf("%s %s %s", c.name, c.tel, c.addr);
    
    printf("name : %s\n", c.name);
    printf("tel : %s\n", c.tel);
    printf("addr : %s\n", c.addr);
    
    return 0;
}