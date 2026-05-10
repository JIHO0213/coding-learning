#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

// 35분 +
void main(){
    int N,K;
    int num[100];
    int sorted[100];
    scanf("%d %d", &N, &K);
    for (int i=0; i<N; i++) scanf("%d", &num[i]);
    
    int count = (N%K) ? N/K+1 : N/K;
    
    int index = 0;
    
    int i = 0;
    while (i < N){

        if (num[i] > num[i+1]) {

        }
        i += K;
    }

        
}

