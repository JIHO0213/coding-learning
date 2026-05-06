#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

// 숫자 뒤집기
int Rev(int n){
    int reversed = 0;
    while (n > 0){
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
// 소인수 분해 후 출력
void Prime_Frac_Print(int n){
    
    for (int i =2; i < n; i++){
        int count = 0;
        while (n % i == 0){
            n /= i;
            count++;
        }
        if (count) printf("%d %d\n", i, count);
    }
    if (n > 1) printf("%d %d", n, 1);
    /*
    while (n != 0){
        for (int i =2; i<= n ; i++){
            if (n % i == 0){
                int cnt = 0;
                while (1){
                    n /= i;
                    cnt++;
                    if (n % i != 0) break;
                }
                printf("%d %d\n", i, cnt);
            }
        }    
    }

    24
    2 12
    2 6
    2 3
    3 1
    4
    5
    6
    7
    8
    9
    10

    */
}


void main(){
    // int n, reversed;
    // scanf("%d", &n);

    // reversed = Rev(n);
    // printf("%d\n", reversed);
    // Prime_Frac_Print(reversed);


    int n = 24;
        for (int i =2; i<= n ; i++){
            if (n % i == 0){
                int cnt = 0;
                while (1){
                    n /= i;
                    cnt++;
                    if (n % i != 0) break;
                }
                printf("%d %d\n", i, cnt);
            }
        }    
    }