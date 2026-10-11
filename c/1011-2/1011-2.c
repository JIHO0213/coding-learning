#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main





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
*/ */