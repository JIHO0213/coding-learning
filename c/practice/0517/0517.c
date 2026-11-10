#define _CRT_NO_SECURE_WARNIG
#include <stdio.h>

void insert_sort(int arr[], int, int);

void main(){
    int arr[100];
    int N,K;
    scanf("%d %d", &N, &K);
    for (int i = 0; i<N; i++) scanf("%d", &arr[i]);

    int start = 0, end = 0;
    while (end < N){
        if (end + K > N) end = N;
        else end += K;
        insert_sort(arr, start, end);
        start += K;
    }
    
    for (int i = 0; i<N; i++) printf("%d ", arr[i]);
}



void insert_sort(int arr[], int start, int end){
    int tmp;
    for (int i = start; i<end; i++){
        for (int j = i+1; j<end; j++){
            if (arr[j] < arr[i]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
