#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N, arr[100], tmp;
    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        int *ap = arr, *max = arr, *min = arr;

        while (scanf("%d", &tmp) == 1 && tmp != 0){
            *ap = tmp;
            if (ap == arr) max = min = ap;     // 첫 원소로 초기화
            else {
                if (tmp < *min) min = ap;
                if (tmp > *max) max = ap;
            }
            ap++;
        }

        int *s = max < min ? max : min;        // 앞쪽 위치
        int *e = max < min ? min : max;        // 뒤쪽 위치

        if (e - s <= 1) printf("none");
        else for (int *p = s + 1; p < e; p++)
            printf(p == s + 1 ? "%d" : " %d", *p);
        printf("\n");
    }
    return 0;
}