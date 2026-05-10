#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

// 13분
// 5분
void main(){
    int N,M;
    char A[100], B[100];
    int count = 0;

    scanf("%d %d", &N, &M);
    for (int i = 0; i<N; i++) scanf(" %c", &A[i]);
    for (int i = 0; i<M; i++) scanf(" %c", &B[i]);


    int index = 0;
    for (int i = 0; i<N; i++){
        int ok = 0;
        for (int j = 0; j<M; j++){
            // 이중 반복문으로 
            // B는 0~M까지 반복,
            // A는 i+ 0~M 으로 한칸씩 이동하면서 반복
            // B와 모두 일치할때만 count 증가
            if (A[i+j] == B[j]) ok++;
        }
        if (ok == M) {
            count++;
            i += M-1; // 일치시에 인덱스 +M으로 건너뛰기 (M-1 이후 루프에서 +1 = M만큼 이동)
        }
    }
    printf("%d", count);

}