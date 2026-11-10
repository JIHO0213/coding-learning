#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char min[101];
    char max[101];
    int len;
}info;
// icecream makes everything better
info finder(char* arr){
    info inf;
    inf.len = strlen(arr);
    strcpy(inf.min, "zzzzzzzz");
    strcpy(inf.max, " ");

    char word[101];
    int wi= 0;
    for (int i = 0; i<=inf.len; i++){
        if (arr[i] == ' ' || arr[i] == '\0'){
            word[wi] = '\0';
            if (strcmp(inf.min, word) > 0) strcpy(inf.min, word);
            if (strcmp(inf.max, word) < 0) strcpy(inf.max, word);
            wi = 0;
        }
        else word[wi++] = arr[i];
    }

    return inf;
}


int main(){
    int N, len;
    char arr[10][101];
    scanf("%d", &N);
    getchar();

    info s,l;
    s.len = 100;
    l.len = -1;

    for (int i = 0; i<N; i++){
        fgets(arr[i], sizeof(arr[i]), stdin);
        int len = strlen(arr[i]);
        arr[i][len-1] = '\0';

        info inf = finder(arr[i]);

        if (inf.len < s.len) s = inf;
        if (inf.len > l.len) l = inf;
    }   

    printf("%s\n%s", s.min, l.max);

    return 0;
}