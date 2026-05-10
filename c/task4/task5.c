#define _CRT_NO_SECURE_WARNING
#include <stdio.h>
// 30분 + 
void main(){
    int N;
    int K;
    int num[100];
    int result[100];

    scanf("%d", &N);
    for (int i = 0; i<N;i++) scanf("%d", &num[i]);
    scanf("%d", &K);

    int count = 0;
    for (int j = 0; j < N; j++){
        if (num[j]%2 == 0){
            for (int k = N-1; k>j; k--){
                result[k+1] = num[k];
            }
            result[j+1] = K;
            result[j] = num[j];
            count++;
            j += 2;
        }
        else result[j] = num[j];
    }

    for (int i = 0; i<N+count;i++) printf("%d ", result[i]);
    
}