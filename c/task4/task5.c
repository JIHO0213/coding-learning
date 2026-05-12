#define _CRT_NO_SECURE_WARNING
#include <stdio.h>
// 35분 + 10분
void main(){
    int N;
    int K;
    int num[100];
    int tmp;
    scanf("%d", &N);
    for (int i = 0; i<N;i++) {
        scanf("%d", &tmp); //임시값에 저장
        if (tmp%3 == 0) { //임시값이 3의 배수
            N--; //최댓값과 인덱스 감소시키기
            i--; // -> 배열 한칸 빼기 기능
            continue;
        }
        num[i] = tmp;
        if (num[i]%2 == 0 ) { //입력값이 짝수라면 
            num[i+1] = -1; //다음값을 비워놓고
            N++; // 최댓값과 인덱스 증가시키키
            i++; // -> 다음 루프는 i+2부터
        } 
    }
    scanf("%d", &K);    

    for (int j = 0; j<N; j++){
        if (num[j] == -1) num[j] = K;
    } // 비운값(-1)만 K로 교체

    for (int i = 0; i<N;i++) printf("%d ", num[i]);
}