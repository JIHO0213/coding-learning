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
    int d1 = (*p > *(p+1)) - (*p < *(p+1)); 
    // 배열의 증감 파악 : p - !p => 1 or -1
    
    while (*(p+1) != -1){ // 끝값 도달하기 전까지
        int d2 = (*p > *(p+1)) - (*p < *(p+1));
        if (d1 != d2) return p;
        p++;
    }
    return p; 

}

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