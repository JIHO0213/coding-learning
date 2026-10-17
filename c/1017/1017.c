#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//6:20 ~ 6:26
//6:26 ~ 6:47, 6:54
//7:18 ~ 7:24
//7:27 ~ 7:44
//12:11 ~ 12:24
//12:24 ~ 12:40
//12:40 ~ 12:50
//1:02 ~ 1:32
//1:32 ~ 1:48
int scmp(char* s1, char*s2){
    while(*s1 && *s1 == *s2){
        s1++; s2++;
    } return *s1-*s2;
}

void StringAdd(char* arr, char c, int idx){ // c 삽입
    for (char *p = arr+strlen(arr)+1; p >= arr+idx; p--){
        *p = *(p-1);
    } *(arr+idx) = c;
}

int Convertor(char c){
    return c-'0';
}

int main(){
    char arr[100];
    scanf("%s", arr);
    for (int i = 0; arr[i+1] != '\0'; i++){
        int n_i1 = Convertor(arr[i]);
        int n_i2 = Convertor(arr[i+1]);
        if ((n_i1 % 2) && (n_i2 % 2)) {StringAdd(arr, '+', i+1); i++;}
        else if ((n_i1 % 2 == 0) && (n_i2 % 2 == 0)) {StringAdd(arr, '*', i+1); i++;}
    }

    printf("%s", arr);

    return 0;
}

