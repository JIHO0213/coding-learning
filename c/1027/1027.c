#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_row(int **p, int M, int N){
    int cnt = 0;
    int max = 0;
    for (int i = 0; i<M; i++){
        for (int j = 0; j<N; j++){
                if (p[i][j] == 0){
                    cnt = 1;
                    if (max < cnt) max = cnt;
                    for (int k = j+1; k<N; k++){
                        if (p[i][k] == 0){
                            cnt++;
                            if (max < cnt) max = cnt;
                        }
                        else {cnt = 0; break;}
                    }
                }
        }

        
    }
    return max;
}

int check_col(int **p, int M, int N){
    int cnt = 0;
    int max = 0;
    for (int i = 0; i<M; i++){
        for (int j = 0; j<N; j++){
                if (p[i][j] == 0){
                    cnt = 1;
                    if (max < cnt) max = cnt;
                    for (int k = i+1; k<M; k++){
                        if (p[k][j] == 0){
                            cnt++;
                            if (max < cnt) max = cnt;
                        }
                        else {cnt = 0; break;}
                    }
                }
        }

        
    }
    return max;
}

int main(){
    int N, M, max;
    scanf("%d %d", &M, &N);
    
    int **Matrix = (int **) malloc(M * sizeof(int**));
    for (int i = 0 ; i< M; i++){
        Matrix[i] = (int *) malloc(N * sizeof(int *));
    }
    for (int i = 0; i<M; i++){
        for (int j = 0; j<N; j++){
            Matrix[i][j] = 0;
        }
    }
    int C, R, num;

    while (1){
        scanf("%d %d %d", &R, &C, &num);
        if (!(R || C || num)) break;
        Matrix[R][C] = num;
    }
    for (int i = 0; i<M; i++){
        for (int j = 0; j<N; j++){
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
    int col = check_col(Matrix, M, N);
    int row = check_row(Matrix, M, N);
    if (col > row) max = col;
    else max = row;
    printf("%d", max);

    return 0;
}

