#include <stdio.h>

struct Body
{
    int height;
    double weight;
};

struct Body makeStudent(struct Body dad, struct Body mom)
{
    struct Body student;
    student.height = (dad.height + mom.height) / 2 + 5;
    student.weight = (dad.weight + mom.weight) / 2.0 - 4.5;
    return student;
}

int main() {
    struct Body dad, mom;
    
    scanf("%d %lf", &dad.height, &dad.weight);
    scanf("%d %lf", &mom.height, &mom.weight);
    
    struct Body student = makeStudent(dad, mom);
    
    printf("height : %dcm\n", student.height);
    printf("weight : %.1fkg\n", student.weight);
    
    return 0;
}