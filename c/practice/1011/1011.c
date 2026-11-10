#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 23'10"
void swap(int* p1, int* p2){
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void zigzag(int* arr, int N){
    for (int i = 0; i<N-1; i++){
        if (i%2 == 0){
            if (*(arr+i) < *(arr+i+1));
            else {swap(arr+i, arr+i+1);}            
        }
        else{
            if (*(arr+i) > *(arr+i+1));
            else {swap(arr+i, arr+i+1);}
        }
    }
}

int maxDiff(int* arr, int N){
    int max = 0;
    int d;
    for (int i = 0; i<N-1; i++){
        d = *(arr+i+1) - *(arr+i);
        d = (d>0) ? d:-d;
        if (d > max) max = d;
    }
    return max;
}


int main(){
    int N;
    int arr[100];

    scanf("%d", &N);
    for (int i = 0; i<N; i++) scanf("%d", arr+i);

    zigzag(arr, N);

    for (int i = 0; i<N; i++) printf("%d ", *(arr+i));
    printf("\n%d", maxDiff(arr, N));
    return 0;
}

/*
5
4 2 7 1 9

2 7 1 9 4

2 4 7 1 9
2 7 4 1 9
2 7 1 4 9
2 7 1 9 4


2 4 7 1 9
2 4 7 9 1
*/