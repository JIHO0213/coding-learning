#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

//13분
int main(){
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);

    int value, max = -1;
    for (int i = N; i<=M; i++){
        if (i%K == 0) value = digit_maximum(i);
        else value = i%K;
        
        if (value > max) max = value;
    }
    printf("%d", max);
    return 0;
}

// x가 y의 배수일 때 1
// 6 2
int multiple(int x, int y){
    for (int i = 1; y*i<=x; i++){
        if (y*i == x) return 1; 
    } return 0;
}

int maximum(int x, int y){
    if (x>y) return x;
    return y;
}

int digit_maximum(int x){
    int digit;
    int max = x%10;
    while (x){
        x /= 10;
        digit = x%10;
        if (maximum(max, digit) == digit) max = digit;
    } return max;
}