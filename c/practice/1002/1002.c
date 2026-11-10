#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input(int*);
int number(int*, int*);
int* sel_next(int*);

int main(){
    int arr[100]; 
    int N = input(arr);

    int* sp = arr, *ep;
    while (1){
        ep = sel_next(sp);
        printf("%d\n", number(sp, ep));
        if (*(ep+1) == -1) break; // 종료 조건 : 배열 마지막 요소 도달
        sp = ep;
    }
    return 0;
}

int* sel_next(int* p){
    int flip[100], *fp = flip;
    for (int i = 0 ; *(p+1+i) != -1; i++){
        *fp++ = (*(p+1+i) > *(p+i)) ? 1:-1; // 증감 변화 체크 배열
    }
    
    for (int *tp = flip; tp<fp; tp++){
        if (*(tp) * *(tp+1) < 0) return p + (tp - flip) + 1;
    }
    return p + (fp - flip);
}

// 

int input(int* arr){
    int* p = arr;
    while (scanf("%d", p) == 1 && *p != -1) p++;
    return p - arr;
}

int number(int* str1, int* str2){
    int result = 0, m = 1;
    for (int* p = str2; p>=str1; p--){ // 끝부터 정수 생성
        result += *p * m;
        m *= 10;
    }
    return result;
}