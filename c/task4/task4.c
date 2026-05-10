#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

// 18분
// 37분
void main(){
    int N;
    scanf("%d", &N);
    //X는 전체 양수 배열,
    //Y는 출력 배열
    int X[100], Y[100];
    int temp;
    int X_index = 0;
    for (int i = 0; i<N; i++){
        scanf("%d", &temp);
        if (temp > 0) {
            X[X_index] = temp;
            X_index++;
        }
    }

    // Y 인덱스 별도로 생성
    // Y_rev_index는 뒤부터,
    // Y_index는 앞부터 
    int Y_rev_index = X_index;
    int Y_index = 0;

    for (int j = 0; j<X_index; j++){
        if (X[j]%2 == 0) {
            Y[Y_index] = X[j];
            Y_index++;
        }
            
        else {
            Y[Y_rev_index -1] = X[j]; 
            Y_rev_index--;
        }
    }

    // 짝수 간 교체 알고리즘

    // 두 포인터 설정
    Y_rev_index = X_index-1;
    Y_index = 0;
    // 두 포인터가 교차하기 전까지 반복
    while (Y_index < Y_rev_index){
        // 포인터 위치
        while (Y[Y_rev_index]%2) Y_rev_index--;
        while (Y[Y_index]%2) Y_index++;
        
        
        // 동일한 값이 아닐때 교체
        if (Y[Y_index] != Y[Y_rev_index]){
            int temp;
            temp = Y[Y_index];
            Y[Y_index] = Y[Y_rev_index];
            Y[Y_rev_index] = temp;
        }

        /* *주의*
        Y[Y_index] = Y[Y_rev_index]
        Y[Y_rev_index] = Y[Y_index]
        ㄴ 교체 안됨, 중복값 저장
        */
        
        //포인터 위치 이동
        Y_index++;
        Y_rev_index--;
    }


    for (int j = 0; j<X_index; j++) printf("%d ", Y[j]);
}