#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void trans(char* arr, char* result, int N){
    if (!N) {strcpy(result, arr); return;}
    char tmp;
    int ridx = 0;
    for (int i = 0; arr[i]; i++){
        if (arr[i] >= 'A' && arr[i] <= 'Z'){
            result[ridx++] = (arr[i] - 'A' + N) % 26 + 'A';
        } // 27 = 27%26 + 0 = A
        else if (arr[i] >= 'a' && arr[i] <= 'z'){
            result[ridx++] = ((arr[i] - 'a' - N) % 26 + 26) % 26 + 'a';
        } //  a: 63 62%26 : 10 + 63 = 89
        else if (arr[i] >= '0' && arr[i] <= '9'){
            tmp = (arr[i] - '0') + 'A' - 1;
            if (arr[i+1] >= '0' && arr[i+1] <= '9'){
                tmp = ((arr[i]-'0') * 10 + (arr[i+1]-'0')) + 'A' - 1;
                i++;
            }
            for (int j =0; j<N; j++) result[ridx++] = tmp;
        }
        else {
            result[ridx++] = ' ';
        }
    }
    result[ridx] = '\0';
}

// CLikp5tGLE?Qej15J
// ENginEErING SchOOL

int main(){
    char arr1[100], arr2[100];
    char *ap1 = arr1, *ap2 = arr2;
    int iseq = 0;

    while (scanf("%c", ap1) && *ap1 != '\n'){ap1++;}
    while (scanf("%c", ap2) && *ap2 != '\n'){ap2++;}
    *ap1 = '\0'; *ap2 = '\0';
    
    for(int N = 1; N<=10; N++){
        char result[200];
        trans(arr1, result, N);
        if (strcmp(result, arr2) == 0) {iseq = 1;}
        char tmp[200];
        trans(arr2, tmp, N);
        if (strcmp(tmp, arr1) == 0) {iseq = 2;}
    }

    printf("%d", iseq);

    return 0;
}