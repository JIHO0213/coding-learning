#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void push(char* arr, int N, int idx, int len){ // 뒤로 N칸 밀기
    for (int i = len; i>idx; i--){
        arr[i+N] = arr[i];

    }
}

int main(){
    char str1[101], str2[101], result[251];
    
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int len1 = strlen(str1), len2 = strlen(str2);
    str1[len1-1] = '\0'; str2[len2-1] = '\0';



    /*
red orange red yellow green red blue purple yellow
white black gray pink brown blush crimson garnet vermilion indigo
    */
    //str1 정렬 해놓고 중복 확인하기
    //str1 단어 구분하기 & 

    int idx[100];
    int idx_i = 1;

    idx[0] = 0;

    char word[101][101];
    int wcnt = 0, wi = 0;

    // arr1에서의 단어 인덱스 배열 생성,
    // 단어 배열 생성
    for (int i = 0; i<len1; i++){
        if (str1[i] == ' ' || str1[i] == '\0'){
            idx[idx_i++] = i+1;
            word[wcnt++][wi] = '\0';
            wi = 0;
        }
        else{
            word[wcnt][wi++] = str1[i];
        }
    }
    int idx2[100];
    int idx_i2 = 1;
    idx[0] = 0;

    for (int i = 0; i<len2; i++){
        if (str1[i] == ' ' || str1[i] == '\0'){
            idx[idx_i++] = i+1;
        }
    }

    int order[100];
    for (int i = 0; i<wcnt; i++) order[i] = i;

    // 단어 기준으로 인덱스 순서 배열 정렬
    for (int i = 0; i<wcnt-1;i++){
        for (int j = 0;j<wcnt-i-1;j++){
            if (strcmp(word[order[j]], word[order[j+1]]) > 0){
                int tmp = order[j];
                order[j] = order[j+1];
                order[j+1] = tmp;
            }
        }
    }

    //중복 찾기

    str2_idx= 0;
    for (int i = 0; i<wcnt; i++){
        if (strcmp(word[order[i]], word[order[i+1]]) == 0){
            int N = idx2[str2_idx+1] - idx2[str2_idx];
            push(str1, N, idx[order[i+1]], len1);
            //arr1[idx[order[i+1]]]은 중복 단어의 시작 위치 
            for (int j = 0; j<N; j++){
                str1[idx[order[i+1+j]]] = str2[j];
            }
        }
    }

    printf("%s", str1);


    return 0;
}