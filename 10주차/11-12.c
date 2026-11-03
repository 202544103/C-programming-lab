#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{

char str1[20] = "Back";
char str2[20] ="Space";
char str3[20];

char ch = 'p';
int n = 3;

// 문자열의 길이를 계산하려면 strlen() 함수 사용함
int len =strlen(str1);
printf("str1의 길이: %d\n", len);

// 문자열을 복사하려면 strcpy(), strncpy() 함수 사용
strcpy(str3, str1);
printf("str1을 str3에 복사: %s\n", str3);

// str2의 첫 n개(3개) 문자를 str3에 복사하기 위한 strncpy
strncpy(str3, str2, n);
str3[n]= '\0'; // 널 문자 추가
printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);
}