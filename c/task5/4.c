#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

//10분
//13분

int is_prime_number(int num);
int count_prime_number(int cnt, int num);

int main(){
    int N;
    int num[100];
    scanf("%d", &N);
    int value, cnt = 0, prime = 0, max = 0;
    int last_prime;
    for (int i = 0; i<N; i++) {
        scanf("%d", &value);
        cnt = count_prime_number(cnt, value);
        if (max < cnt) {
                max = cnt;
                last_prime = value;
            }
        }
    if (max) printf("%d\n%d", max, last_prime);
    else printf("0");
    return 0;
}


int is_prime_number(int num){
    if (num == 1) return 0;
    for (int i = 2; i*i<=num; i++){
        if (num%i == 0) return 0;
    } return 1;
}

int count_prime_number(int cnt, int num){
    if (is_prime_number(num) && num < 100) return cnt+1;
    return 0;
}