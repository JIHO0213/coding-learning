#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int arr[], int indx);

void main(){
    int N, K;
    int arr[100];
    scanf("%d", &N);
    for (int i = 0; i<N; i++) scanf("%d", &arr[i]);

    bubble_sort(arr, N);

    int rank[100];
    int indx = 0;
    for (int i = 0; i<N; i++){
        int cnt = 1;
        for (int j = i+1; j>=0; j--){
            if (arr[j] > arr[i]) cnt++;
        }
        rank[indx++] = cnt;
    }
    for (int i = 0; i<N; i++) printf("%d:%d\n", rank[i] , arr[i]);
}
/*
6
72 95 88 95 60 88

95  95  88  88  72  60
*/


void bubble_sort(int arr[], int indx){
    for (int i = 0; i<indx-1; i++){
        for (int j=0; j<indx-1-i;j++){
            int tmp;
            if (arr[j] < arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

// void main(){
//     int N, K;
//     int arr[100];
//     scanf("%d %d", &N, &K);
//     for (int i = 0; i<N; i++) scanf("%d", &arr[i]);
//     bubble_sort(arr, N);

//     int front = 0, back = N-1;
//     int sum = 0;
//     while (front < back){
//         sum = arr[front] + arr[back];
//         if (sum == K) {printf("(%d %d) ", arr[front], arr[back]); front++; back--;}
//         else if (sum < K) front++;
//         else if (sum > K) back--;
        
//     }



//     // for (int i = 0; i<N; i++){
//     //     for (int j = i; j<N; j++){
//     //         if (arr[i] + arr[j] == K) {
//     //             printf("(%d %d)", arr[i], arr[j]);
//     //         }
//     //     }
//     // }
// }

// /*
// 8 9
// 1 4 5 8 11 13 7 2
// (1 8) (2 7) (4 5)
// */


