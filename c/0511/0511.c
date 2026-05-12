#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

// 77분
// * 전 문제와 다른 방식으로 구현하다보니 오래걸린듯
void main(){
    char value = '0';
    char X[100], Y[100];
    int M;
    int X_indx = 0, Y_indx = 0;
    //X 배열 입력받기
    while (1){
        scanf("%c",&value);
        if (value == '!') break;
        X[X_indx] = value;
        X_indx++;
    }
    scanf("%d", &M);

    for (int i = 0; i<X_indx; i++){
        int already = 0; //중복 판단용 변수
        for (int j = 0; j<Y_indx; j++){ 
            if (X[i] == Y[j]) already = 1; 
        } 
        if (!already) {Y[Y_indx] = X[i]; Y_indx++;}
    }  // 중복이 아닐때 Y배열에 넣기
    
    int trns_Y[100];
    for (int i = 0; i<Y_indx; i++){
        if (Y[i] >= 'a' && Y[i] <= 'z'){
            trns_Y[i] = (Y[i] - 'a' + M)%26 + 'A';
        } 
        else{
            trns_Y[i] = (Y[i] - 'A' + M)%26 + 'a';
        } // 소문자 <-> 대문자 연산
    }

    int len = 1;
    int max = 0, max_indx = 0;
    for (int j = 1; j<Y_indx; j++){
        int cur = (Y[j] >= 'a' && Y[j] <= 'z') ? 1 : 0;
        int prv = (Y[j-1] >= 'a' && Y[j-1] <= 'z') ? 1 : 0;
        // Y[j]와 Y[j-1]의 대소문자 비교 : 소문자 1, 대문자 0
        if (cur != prv) {len++;}
        else {len = 1;}

        if (max < len) {max = len; max_indx = j;}
    } // 최댓값 갱신 & 인덱스 체크

    //(1)
    for (int i = 0; i<Y_indx; i++) printf("%c", Y[i]);
    printf("\n");
    //(2)
    for (int i = 0; i<Y_indx; i++) printf("%c", trns_Y[i]);
    printf("\n");
    //(3)
    if (max>=2){ // 길이 2 이상일때만
        for (int i = max_indx-max+1; i<=max_indx; i++) {
            printf("%c", trns_Y[i]);
        }
    }
    else printf("none");
}



// //17분
// int a_in_arr(char arr[], char, int);

// void main(){
//     char value = '0';
//     char X[100], Y[100];
//     int X_indx = 0, Y_indx = 0;
//     while (value != '!'){
//         scanf("%c", &value);
//         if (value != '!') { // 입력 점검 -> 더 간단한 코드?
//             X[X_indx] = value;
//             X_indx++;
//         }
//     }
//     // Y 배열 속 X[i]가 없을때 
//     // Y배열에 X[i] 추가 (인덱스 별도)
//     for (int i = 0; i<X_indx; i++){
//         if (!a_in_arr(Y, X[i], Y_indx)){
//             Y[Y_indx] = X[i];
//             Y_indx++;
//         }
//     }

//     // 역순으로 출력
//     for (int j = Y_indx-1; j>=0; j--){
//         printf("%c", Y[j]);
//     }
// }
// // 배열 속 a가 있는가?
// int a_in_arr(char arr[], char a, int index){
//     for (int i = 0; i<index; i++){
//         if (arr[i] == a) return 1;
//     }
//     return 0;
// }


// //30분
// void main(){
//     int N;
//     int score[20]; 
//     int rank;
//     char grade;
//     int tmp_mx = -1, tmp_rank = 0;
//     scanf("%d", &N);
//     for (int i = 0; i<N; i++) scanf("%d", &score[i]);

    
//     for (int j = 0; j<N; j++){
//         int max, max_indx;
//         max = -1;
//         max_indx = 0;
//         // score 배열에서 최댓값을 찾고
//         // max 변수에 저장, 배열에서 삭제(-1)
//         for (int i = 0; i<N; i++){
//             if  (score[i] > max){
//                 max = score[i];
//                 max_indx = i;
//             }
//         }
//         // 이전 점수와 다음 점수가 같다면 등수 동일
//         score[max_indx] = -1;
//         if (tmp_mx != max) rank = j+1;
//         else rank = tmp_rank;
//         tmp_mx = max;
//         tmp_rank = rank;
        
//         // 전체 인원의 상위 30%만 A
//         // N * 0.3이면 소수점 오차 발생 -> 정수 연산 N*3/10
//         // ex) 7명 중 30% -> 2등까지
//         // 7*0.3 = 2.1 -> 7*3/10 = 2
//         if (rank <= N*3/10 ) grade = 'A';
//         else if (rank <= N*7/10) grade = 'B';
//         else grade = 'F';

//         printf("%d %d %c\n", max, rank, grade);
//     }
// }


// // 31분
// void main(){
//     int N,M;
//     int num[100];
//     scanf("%d %d", &N, &M);
//     for (int i = 0; i<N; i++) scanf("%d", &num[i]);

//     // 평균 이상, 최댓값, 최솟값 배열
//     int over_mean_arr[100], max_arr[100], min_arr[100];
//     int ov_indx = 0, m_indx = 0;

//     for (int i = 0; i<N; i += M){
//         // 루프마다 횟수, 평균, 최대, 최소 초기화
//         int count = 0;
//         float mean = 0;
//         int max = -1, min = 99999999;
//         // i는 M씩 커지므로 j = 0~M, M~2M, 2M~3M
//         // + j<N 일때만
//         for (int j = i; j<M+i && j<N; j++) {
//             mean += num[j];    
//             if (max < num[j]) max = num[j];
//             if (min > num[j]) min = num[j];
//             count++;
//         }
//         // int/int = int이므로 자료형 변경
//         mean = (float)(mean / count);
        
//         //num과 사이즈가 다르므로 별도 인덱스 활용
//         for (int k = i; k<M+i; k++){
//             if (num[k] >= mean) {
//                 over_mean_arr[ov_indx] = num[k];
//                 ov_indx++;
//             }
//         }
//         max_arr[m_indx] = max;
//         min_arr[m_indx] = min;
//         m_indx++;
//     }

//     // 출력
//     for (int i = 0; i<ov_indx; i++) printf(" %d", over_mean_arr[i]);
//     printf("\n");
//     for (int i = 0; i<m_indx; i++) printf(" %d", max_arr[i]);
//     printf("\n");
//     for (int i = 0; i<m_indx; i++) printf(" %d", min_arr[i]);

// }



// //7분
// void main(){
//     int N,M;
//     int num[100];
//     int count = 0;
//     scanf("%d %d", &N, &M);
//     for (int i = 0; i<N; i++) scanf("%d", &num[i]);
    
//     // 이중 반복문으로 배열 탐색
//     // j = i+1 -> i와 i+1부터 끝까지 비교
//     for (int i = 0; i<N; i++){
//         for (int j = i+1; j<N; j++){
//             if (num[i] + num[j] == M) count++;
//         }
//     }
//     printf("%d", count);
// }















// // 19분
// int count_in_arr(int arr[], int, int);

// void main(){
//     int num[10];
//     // 중복 체크용 배열
//     int overlap[10] = {0};
//     int overlap_index = 0;
//     for (int i = 0; i<10; i++) scanf("%d", &num[i]);
    
//     for (int j = 0; j<10; j++){
//         // num[j]가 중복 배열에 있는가?
//         if(!count_in_arr(overlap, num[j], overlap_index)){
//             printf("%d %d\n", num[j], count_in_arr(num, num[j], 10));
//             overlap[overlap_index] = num[j];
//             overlap_index++; // 중복 배열에 없다면 추가 & 인덱스 이동
//         }
//     }
// }

// // 배열 속 몇개?
// int count_in_arr(int arr[], int n, int index){
//     int count = 0;
//     for (int i = 0; i<index; i++){
//         if (arr[i] == n) count++;
//     }
//     return count;
// }
















// //15분

// int n_in_arr(int arr[], int, int);

// void main(){
//     int num[100];
//     int value;
//     int index = 0;
//     //입력이 몇개인지 미정이므로 while 활용
//     while (1){
//         scanf("%d", &value);
        
//         if (n_in_arr(num, value, index)){
//             break;
//         }
//         else{
//             num[index] = value;
//             index++;
//         }
//     }
//     //합 구하기
//     int sum = 0;
//     for (int j = 0; j<index; j++){
//         sum += num[j];
//     }
//     printf("%d", sum);

// }

// // 배열 속 n이 있는 검사하는 함수
// int n_in_arr(int arr[], int n, int index){
//     for (int i = 0; i<index; i++){
//         if (arr[i] == n) return 1;
//     }
//     return 0;
// }