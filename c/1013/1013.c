#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_C 9

typedef struct{
    char name[MAX_C];
    int k, e, m;
    float score;
    char grade;
}student1;


int main(){
    student1 s[50];
    int N;
    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        scanf("%s %d %d %d", s[i].name, &s[i].k, &s[i].e, &s[i].m);
        s[i].score = (s[i].k + s[i].e + s[i].m) / 3.0;
        if (s[i].score >= 90) s[i].grade = 'A';
        else if (s[i].score >= 80) s[i].grade = 'B';
        else if (s[i].score >= 70) s[i].grade = 'C';
        else s[i].grade = 'D';
        printf("%s %.1f %c\n", s[i].name, s[i].score, s[i].grade);
    }



}