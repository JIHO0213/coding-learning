#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

// 1시간 + AI

void main(){
  int N,K;
  int tmp;
  int num[100];
  scanf("%d %d", &N, &K);
  for (int i = 0; i<N; i++) scanf("%d", &num[i]);
  
  // l을 k단위로 이동시켜 묶음 나눔
  for (int l = 0; l<N; l += K){
      // 인접한 두 값 중 큰 값을 끝으로 밀어냄
      // -> 한 번의 반복(i)이 끝나면 가장 큰 값이 맨 뒤에 위치
      // -> 이 과정을 N-1번 반복해야 정렬
    for (int j = l; j<K-1+l; j++){
        //i < N-1 조건 : 정렬이 배열 바깥에 넘어가지 않도록
         for (int i = l; i<K-1+l && i<N-1; i++){ 
             if (num[i] > num[i+1]) {tmp = num[i]; num[i] = num[i+1]; num[i+1] = tmp;}
            } // num[i] > num[i+1]시 교환
        }
    }
    for (int i = 0; i<N; i++) printf("%d ", num[i]);
}


/*
참고) 버블 정렬
for (int i = 0; i<N-1; i++){
    for (int j = 0; j<N-1; j++){
        if(arr[i] > arr[i+1]) {
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
        }
    }    
}
 - 구조가 단순
 - 반복 횟수가 많아 시간이 오래 걸림
*/