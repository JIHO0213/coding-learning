#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

//40분 + 클로드 활용

void main(){
    int N;
    int X[100];
    scanf("%d", &N);
    for (int i = 0; i<N; i++) scanf("%d", &X[i]);

    int starts[100], ends[100];
    int count = 0;

    int i = 0;
    while (i < N) {
        if (X[i] % 2) {           
            starts[count] = X[i];
            while (i < N && X[i] % 2) i++;  // 구간 끝까지 이동
            ends[count] = X[i - 1];
            count++;
        } else {
            i++;
        }
    }

    printf("%d\n", count);
    for (int j = 0; j < count; j++)
        printf("%d %d ", starts[j], ends[j]);
}
