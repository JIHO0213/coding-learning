#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

//2분 2분 9분
int add_digits(int N);

int main(){
    int N = 1, min = 999999, digit, min_N;
    while (N > 0){
        scanf("%d", &N); // N 입력
        if (N<0) break; // 음수일 경우 종료
        digit = N;
        while (digit>=10){ // digit
            digit = add_digits(digit);
        } // -> 디지털근 계산
        if (digit < min) {
            min = digit;
            min_N = N;
        }

    }
    printf("%d %d", min_N, min);
}

int add_digits(int N){
    int sum = 0;
    while (N){
        sum += N%10;
        N /= 10;
    } return sum;
}

/*
912 175 1982 –4
*/