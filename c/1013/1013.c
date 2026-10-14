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

void sort(student1* s, int N){
    for (int i = 0; i<N-1; i++){
        for (int j = 0; j<N-i-1; j++){
            if ((s+j)->score < (s+j+1)->score){
                student1 tmp = *(s+j);
                *(s+j) = *(s+j+1);
                *(s+j+1) = tmp;
            }
            else if (s[j].score == s[j+1].score){
                if (strcmp(s[j].name, s[j+1].name) > 0){
                    student1 tmp = *(s+j);
                    *(s+j) = *(s+j+1);
                    *(s+j+1) = tmp;
                }
            }
        }
    }
}

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
    }

    sort(s, N);

    for(int i = 0 ;i<N; i++){
        printf("%s %.1f %c\n", s[i].name, s[i].score, s[i].grade);
    }



}

/*
5
Kim 82 72 58
Young 90 100 99
Lee 90 10 10
Kim 90 100 99
Jung 100 0 50


4
Kim 80 80 80
Army 80 80 80
Kang 80 80 80
Young 90 90 80
*/