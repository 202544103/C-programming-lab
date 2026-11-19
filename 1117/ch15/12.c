#include <stdio.h>
#include <string.h>

struct Score {
    char name[25];
    int kor;
    int eng;
};

struct Score plus(struct Score s1, struct Score s2) {
    struct Score res;
    strcpy(res.name, "Total");
    res.kor = s1.kor + s2.kor;
    res.eng = s1.eng + s2.eng;
    return res;
}

int main() {
    struct Score s1, s2;
    scanf("%s %d %d", s1.name, &s1.kor, &s1.eng);
    scanf("%s %d %d", s2.name, &s2.kor, &s2.eng);
    
    printf("%s %d %d\n", s1.name, s1.kor, s1.eng);
    printf("%s %d %d\n", s2.name, s2.kor, s2.eng);
    
    struct Score result = plus(s1, s2);
    printf("%s %d %d\n", result.name, result.kor, result.eng);
    
    return 0;
}