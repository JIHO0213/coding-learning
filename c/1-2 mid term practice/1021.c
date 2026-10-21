#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int filterGroup(int* tmp, int* arr, int N, int K, int M){
    int idx = 0;
    for(int i = 0; i<N; i++){
        if ((M == 1) ? *(tmp+i) >= K : *(tmp+i) < K ){
            *(arr+idx) = *(tmp+i);
            printf("%d: %d\n", i, tmp[i]);
            idx++;
        }
    }
    return idx;
} //M, K에 따라 필터링
void splitSort(int* arr, int* odd, int* even, int N, int M){
    for (int i = 0; i<N-1; i++){
        for (int j = 0; j<N-i-1; j++){
            if ((M==1) ? (*(arr+j) > *(arr+j+1)) : (*(arr+j) < *(arr+j+1))){
                int t = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = t;
            }
        }
    }
    int od_idx = 0, ev_idx = 0;
    for(int i = 0; *(arr+i); i++){
        if (*(arr+i) % 2){
            *(odd + od_idx) = *(arr+i);
            od_idx++; 
        } 
        else {
            *(even + ev_idx) = *(arr+i);
            ev_idx++;
        }
    }
} // 그룹 분리 및 정렬

int sumArray(int* arr){
    int sum = 0;
    for (int i = 0; *(arr+i); i++){
        sum += *(arr+i);
    } return sum;
} // 그룹 합 구하기

int main(){
    int arr[200], tmp[200], odd[200], even[200];
    int N, M, K;

    scanf("%d %d %d", &N, &K, &M);
    for (int i = 0; i<N; i++){
        scanf("%d", (tmp+i));
    }
    int len = filterGroup(tmp, arr, N, K, M);
    for (int i = 0; i<len; i++){
        printf("%d ", arr[i]);
    }printf("\n");
    splitSort(arr, odd, even, N, M);
    int odd_sum = sumArray(odd);
    int even_sum = sumArray(even);

    if (odd_sum > even_sum){
        for (int i = 0; odd[i]; i++){
            printf("%d ", *(odd+i));
        }
        printf("\n%d\n", odd_sum);

        for (int i = 0; even[i]; i++){
            printf("%d ", *(even+i));
        }
        printf("\n%d", even_sum);
    }
    else{
        for (int i = 0; even[i]; i++){
            printf("%d ", *(even+i));
        }
        printf("\n%d\n", even_sum);
        
        for (int i = 0; odd[i]; i++){
            printf("%d ", *(odd+i));
        }
        printf("\n%d", odd_sum);
    }

    

    return 0;
}

/*
8 5 1
3 10 5 8 2 12 7 4
*/

