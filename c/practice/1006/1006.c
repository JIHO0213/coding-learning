#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    int M, N;
    char str1[101], str2[101];
    char* s1p = str1, * s2p = str2;

    scanf("%d %d", &M, &N);
    getchar();
    int cnt = 0;
    char tmp;
    while (scanf("%c", &tmp) && tmp != '\n'){
        if (tmp == ' ') cnt++;
        if (cnt == M && tmp != ' ') {*s1p++ = tmp;}
    } *s1p = '\0';
    cnt = 0;
    tmp = '1';
   while (scanf("%c", &tmp) && tmp != '\n'){
        if (tmp == ' ') cnt++;
        if (cnt == N && tmp != ' ') {*s2p++ = tmp;}
    } *s2p = '\0';

    char* result = (strcmp(str1,str2) < 0) ? strcat(str1,str2) : strcat(str2,str1);
    printf("%s", result);


    return 0;
}