#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//25'30"

typedef struct{
    char handle[16];
    int s1, s2, s3;
    float score;
} participant;

int countBonus(char *p, char *q){
    int A = 0, n = 0;
    for (char* i = p; i<q; i++){
        if (*i >= 'A' && *i <= 'Z') A++;
        else if (*i >= '0' && *i <= '9') n++;
    }
    return A-n;
}

void swap(participant* p1, participant* p2){
    participant tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void sortParticipants(participant* p, int N){
    for (int i = 0; i<N-1; i++){
        for (int j = 0; j<N-i-1; j++){
            if (p[j].score < p[j+1].score){
                swap(p+j, p+j+1);
            }
        }
    }
}
int main(){
    participant p[50];
    int N; 

    scanf("%d", &N);
    for (int i = 0 ; i<N; i++){
        scanf("%s %d %d %d", p[i].handle, &p[i].s1, &p[i].s2, &p[i].s3);
        p[i].score = p[i].s1 * 0.5 + p[i].s2 * 0.3 + p[i].s3 * 0.2;
        p[i].score += countBonus(p[i].handle, p[i].handle+strlen(p[i].handle));
    }
    sortParticipants(p, N);

    int n = (N%3)? 1:0;
    for (int i = 0; i< N/3 + n; i++){
        printf("%s %.2f\n", p[i].handle, p[i].score);
    }


    return 0;
}

/*
1 1
2 1
3 1
4 2
5 2
6 2
7 3
*/

/* 
//32'22"
typedef struct{
    char name[10];
    char date[11];
    int score;
} member;

void sortMembers(member* m, int N){
    for (int i = 0; i<N-1; i++){
        for (int j = 0; j<N-i-1; j++){
            if (m[j].score < m[j+1].score){
                member tmp = m[j];
                m[j] = m[j+1];
                m[j+1] = tmp;
            }
            else if (m[j].score == m[j+1].score){
                if (strcmp(m[j].date, m[j+1].date) > 0){
                    member tmp = m[j];
                    m[j] = m[j+1];
                    m[j+1] = tmp;
                }
            }
        }
    }
}

int findRank(member* m, int N, char* name){
    for (int i = 0; i< N; i++){
        if (strcmp(m[i].name,name) == 0){
            return i+1;
        }
    }
    return -1;
}
int main(){
    member m[30];
    int N;
    float avg = 0;
    char name[10];
    
    scanf("%d", &N);
    getchar();
    for (int i = 0; i<N; i++){
        scanf("%s %s %d", m[i].name, m[i].date, &m[i].score);
        avg += m[i].score;
    }
    avg /= (float)N;

    scanf(" %s", name);

    sortMembers(m, N);


    for (int i = 0; i<N; i++){
        printf("%s", m[i].name);
        if (m[i].score < avg) printf("*");
        printf(" %d\n", m[i].score);

    }
    int rank = findRank(m, N, name);
    if (rank == -1) {
        printf("Not Found");
        return 0;
    }
    float diff = m[rank-1].score - avg;
    printf("%d %d%s%.1f", rank, m[rank-1].score, (diff>0)?" +":" ", diff);


    return 0;
} */
/*
5
Kim 2021-03-01 85
Lee 2020-05-10 85
Park 2022-01-15 60
Choi 2019-07-07 90
Jung 2021-11-20 61
Lee

*/