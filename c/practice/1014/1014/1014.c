#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
    char name[10];
    int num, score;
}student;

typedef struct{
    int gr_num;
    float avg;
}group;

void calcGroupAvg(student *s, int N, group *g, int M){
    int cnt[10] = {0,};
    for (int i = 0; i<N; i++){
        g[s[i].num-1].avg += s[i].score;
        cnt[s[i].num-1]++;
    }
    for (int i = 0; i<M;i++){
        g[i].avg /= (float)cnt[i];
        g[i].gr_num = i;
    }
}

void sortGroups(group *g, int M){
    for (int i = 0; i<N-1; i++){
        for (int j = 0; j<N-i-1; j++){
            if(g[j].avg < g[j+1].avg){
                group tmp = g[j]; g[j] = g[j+1]; g[j+1] = tmp;
            }
            else if (g[j].avg < g[j+1].avg 
                && g[j].gr_num > g[j+1].gr_num){
                group tmp = g[j]; g[j] = g[j+1]; g[j+1] = tmp;
            }
        }
    }
}

void printGroupMembers(student *s, int N, int gid){
    student* min;
    for (int i = 0; i<N; i++){
        if (s[i].num == gid) min = 
    }
}
int main(){
    int N, M;
    student s[50];
    group g[10];

    scanf("%d %d", &N, &M);

    for(int i = 0; i<N; i++){
        scanf("%s %d %d", s[i].name, &s[i].num, &s[i].score); // i번째 학생의 이름/번호/점수
        g[s[i].num-1].avg = 0;
    }
    for (int i = 0; i<N; i++){

    }
}




//40'

/* typedef struct{
    char code[9];
    char name[10];
    int n1, n2, n3, n4;
    float score;
    char grade[100];
}employee;

void calcFinal(employee *e){
    e->score = e->n1 * 0.3 + e->n2 * 0.25 + e->n3 * 0.25 + e->n4 * 0.2;
}
void calcStats(employee *arr, int N, float *avg, float *std){
    *avg = 0;
    *std = 0;
    for (int i = 0 ; i<N; i++){
        *avg += arr[i].score;
    } *avg /= (float)N;
    for (int i=0; i<N; i++){
        *std += (arr[i].score - *avg) * (arr[i].score - *avg); 
    }  *std /= (float)N; 
    *std = sqrt(*std);
}
void classify(employee *arr, int N, float avg, float std){
    for (int i=0; i<N; i++){
        if (arr[i].score >= avg + std){strcpy(arr[i].grade, "excellent");}
        else if (arr[i].score <= avg - std){strcpy(arr[i].grade, "bad");}
        else {strcpy(arr[i].grade, "good");}
    } 
}
void sortEmployees(employee *arr, int N){
    for (int i = 0; i<N-1; i++){
        for (int j = 0; j<N-i-1; j++){
            if (arr[j].score < arr[j+1].score){
                employee tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
            else if (arr[j].score == arr[j+1].score &&
                    strcmp(arr[j].code, arr[j+1].code) > 0){
                        employee tmp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = tmp;
                    }
        }
    }
}

int main(){
    int N;
    employee e[50];

    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        scanf("%s %s %d %d %d %d", 
            e[i].code, e[i].name, &e[i].n1, &e[i].n2, &e[i].n3, &e[i].n4);
    
            calcFinal(e+i);
        }
    float avg, std;
    calcStats(e, N, &avg, &std);
    classify(e, N, avg, std);
    sortEmployees(e, N);

    int E = 0, G = 0, B = 0;
    for (int i = 0; i<N; i++){
        if (e[i].grade[0] == 'e') E++;
        else if (e[i].grade[0] == 'g') G++;
        else B++;
        printf("%s %.2f %s\n", e[i].name, e[i].score, e[i].grade);
    }
    printf("excellent:%d good:%d bad:%d", E, G, B);
} */

/*
5
E001 Kim 80 90 70 85
E002 Lee 95 85 90 92
E003 Park 60 65 70 55
E004 Choi 75 80 78 70
E005 Han 88 82 85 90

4
E007 Oh 80 80 80 80
E010 Song 80 80 80 80
E020 Jung 90 90 90 90
E003 Baek 50 50 50 50 
*/