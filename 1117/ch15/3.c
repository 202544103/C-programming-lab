#include <stdio.h>

int main() {
    char my_name[20] = "Yejun";
    int my_age = 12;
    
    char friend_name[20];
    int friend_age;
    
    scanf("%s %d", friend_name, &friend_age);
    
    printf("Your name: %s, age: %d\n", my_name, my_age);
    printf("Friend's name: %s, age: %d\n", friend_name, friend_age);
    
    return 0;
}