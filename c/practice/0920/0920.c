#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 주석 꿀팁: shift alt A -> /**/
//           ctrl k c -> //

int passengerN(int N){ //N<5?
    if (N<5) return -1;
    return 0;
}
int changeseat(int *arr){ 
   /*  int checkarr[21] = {0,}; // 체크 배열 생성

     for (int i = 0; i<21; i++){
        if (*(arr+i)>0){
            *(checkarr+*(arr+i)-1) = 1; // 핵심
        }
        else {break;} // 시간줄이기
    }
    // 1 0 0 0 0 0 1 0 1 0 0 0 0 0 0 0
    
    for (int i = 0; i<21; i++){
        if (*(checkarr+i)<1){return i+1;}
    }
    return 21; */

    unsigned int mask = 0; //비트마스크 방법 
    int *p = arr;
    for (; p < arr+21 && *p != 0; p++){
        mask = mask | (1u << (*p-1)); // 1u : unsigned 1
    }

    for (int i = 0 ; i <21; i++){
        if (!(mask & (1u << i))) return i+1;
    }
    return 21;
}

void rebooking(int *arr){

    for (int i = 0; i<21; i++){
        for (int j = i+1; j<21; j++){
            if (*(arr+i) == *(arr+j)){
                *(arr+j) = changeseat(arr);
            }
        }
    }

}

void bubble_sort(int *arr){
    int len;
    for (int i=0;i<21;i++) {if (arr>0) len++;}

    for (int i=0; i<len-1; i++){
        for (int j = 0; j<len-i-1; j++){
            if (*(arr+j) > *(arr+j+1)){
                int t = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = t;
            }
        }
    }
}

int main(){
    int N;
    int arr[21] = {0,}, *pa = arr;

    scanf("%d", &N);
    for (; pa <arr+N; pa++){scanf("%d", pa);}

    if (passengerN(N) == -1) {
        printf("-1\n");
        return 0;
    }
    else{printf("0\n");}


    rebooking(arr);

    for (int i = 0; i<N; i++){
        printf("%d ", *(arr + i));
    }

    return 0;
}