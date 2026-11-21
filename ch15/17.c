#include <stdio.h>

struct Student
{
    char name[25];
    int score[3];
    int total;   // 총점
};

void input(struct Student students[], int n)
{
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].score[0], &students[i].score[1], &students[i].score[2]);
        students[i].total = students[i].score[0] + students[i].score[1] + students[i].score[2];
    }
}

void sort(struct Student students[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (students[j].total < students[j+1].total) {
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

void output(struct Student students[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", students[i].name, students[i].score[0], students[i].score[1], students[i].score[2], students[i].total);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[10];
    
    input(students, n);
    sort(students, n);
    output(students, n);
    
    return 0;
}