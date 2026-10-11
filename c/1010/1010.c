#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//52'15"

int main(){
    char arr[21][200], word[200], tmp[400];
    int ridx = 0, cidx = 0;
    int isdupl = 0;
    int idx[21];

    fgets(tmp, sizeof(tmp), stdin);
    tmp[strlen(tmp)-1] = '\0';
    scanf("%s", word);
    
    for (int i = 0; i<=strlen(tmp); i++){ //단어 분리하기
        if (tmp[i] == ' ' || tmp[i] == '\0'){
            arr[ridx][cidx] = '\0';
            if (strcmp(arr[ridx], word) == 0) isdupl = 1; //중복 검사
            ridx++;
            cidx = 0;
        }
        else {arr[ridx][cidx++] = tmp[i];}
    }
    
    if (!isdupl){ //중복이 아닐때 arr에 추가
        cidx = 0;
        for (int j = 0; j<strlen(word); j++){
            arr[ridx][cidx++] = word[j];
        }
        arr[ridx++][cidx] = '\0';
    }
    for (int i = 0 ; i<ridx; i++){idx[i] = i;} // 인덱스 배열

    for (int i = 0; i<ridx-1; i++){ // 정렬
        for (int j = 0; j<ridx-i-1; j++){
            if (strcmp(arr[idx[j]], arr[idx[j+1]]) > 0){
                int tmp = idx[j];
                idx[j] = idx[j+1]; idx[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i<ridx; i++){printf("%s\n", arr[i]);}
    for (int i = 0; i<ridx; i++){printf("%s ", arr[idx[i]]);}

    return 0;
}