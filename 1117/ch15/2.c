#include <stdio.h>

int main() {
    char name[25];
    char school[25];
    int grade;
    
    scanf("%s %s %d", name, school, &grade);
    
    printf("Name : %s\n", name);
    printf("School : %s\n", school);
    printf("Grade : %d\n", grade);
    
    return 0;
}