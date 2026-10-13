#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int keycmp(int* k1, int* k2){
    for (int i = 0; i< 26; i++){
        if (k1[i] != k2[i]) return k1[i] - k2[i];
    }
    return 0;
}

int main(){
    char str[101];
    char word[20][10];
    int key[20][26] = {0, };
    int wcnt = 0, widx = 0;

    fgets(str, 101, stdin);
    if (str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';


    for (int i = 0; i<=strlen(str); i++){
        if (str[i] == ' ' || str[i] == '\0'){
            word[wcnt][widx] = '\0';
            for (int j = 0; j<widx; j++){
                int apb_i = word[wcnt][j] - 'a';
                key[wcnt][apb_i]++;
            }
            wcnt++; widx = 0;
        }
        else {
            word[wcnt][widx++] = str[i];
        }
    }


    for (int i = 0; i<wcnt-1; i++){
        for (int j = 0; j<wcnt-i-1; j++){
            if (keycmp(key[j], key[j+1]) < 0){
                for (int k = 0; k<26; k++){
                    int t = key[j][k];
                    key[j][k] = key[j+1][k];
                    key[j+1][k] = t;
                }
                char tmp[100];
                strcpy(tmp, word[j]);
                strcpy(word[j], word[j+1]);
                strcpy(word[j+1], tmp);
            }
        }
    }

    for (int i = 0; i<wcnt; i++){
        printf("%s", word[i]);
        if (word[i+1] && keycmp(key[i], key[i+1]) != 0){
            printf("\n");
        }
        else {printf(" ");}
    }

    return 0;
}





/* void encoding(char* arr, char* result){
    int cnt;
    int idx = 0;
    for (int i = 0; arr[i]; i++){
        cnt = 0;
        for (int j = i; arr[j] == arr[i]; j++){
            cnt++;
        }
        result[idx++] = arr[i];
        result[idx++] = '0' + cnt;
        i += cnt-1;
    }
    result[idx] = '\0';
}

void trans(char* arr, char* result, int N){
    int idx = 0;
    for (int i = 0; arr[i]; i++){
        if (arr[i] >= 'A' && arr[i] <= 'Z'){
            result[idx++] = (arr[i] - 'A' + N) % 26 + 'A';
        } 
        else if (arr[i] >= 'a' && arr[i] <= 'z'){
            result[idx++] = ((arr[i] - 'a' - N) % 26 + 26) % 26 + 'a'; 
        } // 'a' - 'a' - 5 % 26 = -5, -5+ 26 = 21% 26 = 21 + 'a'
        else if (arr[i] >= '1' && arr[i] <= '9'){
            for (int j = 0; j<N; j++){result[idx++] = arr[i] - '0' + 'A' - 1;}
        }
    }
    result[idx] = '\0';
}

int main(){
    int N;
    char arr[100], result[100], tmp[100];

    fgets(arr, 100, stdin);
    if (arr[strlen(arr)-1] == '\n') arr[strlen(arr)-1] = '\0';
    scanf("%d", &N);

    encoding(arr, tmp);
    trans(tmp, result, N);
    printf("%s", result);

    return 0;
}

/*
aaBBBc
2
*/