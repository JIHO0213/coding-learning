#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

// 19분
int count_in_arr(int arr[], int, int);

void main(){
    int num[10];
    // 중복 체크용 배열
    int overlap[10] = {0};
    int overlap_index = 0;
    for (int i = 0; i<10; i++) scanf("%d", &num[i]);
    
    for (int j = 0; j<10; j++){
        // num[j]가 중복 배열에 있는가?
        if(!count_in_arr(overlap, num[j], overlap_index)){
            printf("%d %d\n", num[j], count_in_arr(num, num[j], 10));
            overlap[overlap_index] = num[j];
            overlap_index++; // 중복 배열에 없다면 추가 & 인덱스 이동
        }
    }
}

// 배열 속 몇개?
int count_in_arr(int arr[], int n, int index){
    int count = 0;
    for (int i = 0; i<index; i++){
        if (arr[i] == n) count++;
    }
    return count;
}
















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