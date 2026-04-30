#define CRT_NO_SECURE_WARNING
#include <stdio.h>
//*전까지 문자열 입력 두번 후 사전순으로 비교하기
int main(){
    char value = 'a';
    char first[100], second[100];
    int len_f = 0, len_s = 0;
    
    //첫번째 문자열 입력 및 길이 저장
    for (int i = 0; i<100; i++){
        scanf("%c", &value);
        if (value == '*') {
            len_f = i;
            break;
        }
        first[i] = value;
    }
    //두번째 문자열 입력 및 길이 저장
    for (int i = 0; i<100; i++){
        scanf("%c", &value);
        if (value == '*') {
            len_s = i;
            break;
        }
        second[i] = value;
    }
    //인덱스별 요소를 비교하며 더 작은 요소가 나오면 멈추기
    for (int j = 0; j<100; j++){
        if (first[j] < second[j]) {
            for (int k = 0; k<len_f; k++) printf("%c", first[k]);        
            break;
        }

        else if (first[j] > second[j]) {
            for (int k = 0; k<len_s; k++) printf("%c", second[k]);
            break;
        }
        
    }


    return 0;
}


















// int main(){
//     int n;
//     char N[10];

//     scanf("%d", &n);

//     int temp = n;
//     int count = 0;

//     while (temp > 0) {
//         N[count] = temp%10;
//         temp /= 10;
//         count++;
//     }
//     int even = 0, odd = 0;
//     for (int i = 0 ; i<count; i++){
//         if (i%2) odd = odd*10 + N[i];
//         else even = even*10 + N[i];
//     }
//     printf("%d %d", even, odd);
    
//     return 0;
// }


















// int main(){
//     int num[5];
//     for (int i = 0; i<5; i++) scanf("%d", &num[i]);

//     int first, second;
//     if (num[0] > num[1]){
//         first = num[0];
//         second = num[1];
//     }
//     else {
//         first = num[1];
//         second = num[0];
//     }

//     for (int i = 2; i<5; i++){
//         if (num[i] > first){
//             second = first;
//             first = num[i];
//         }
//         else if (num[i] > second){
//             second = num[i];
//         }

//     }

//     printf("%d\n%d", first, second);
//     return 0;
// }





// int main(){
//     int X[10], Y[10], Z[10];
    
//     for (int i = 0 ;i<10; i++){
//         scanf("%d", &X[i]);
//     }
//     for (int i = 0 ;i<10; i++){
//         scanf("%d", &Y[i]);
//     }
//     for (int i = 0; i<10; i++){
//         Z[i] = X[i] + Y[9-i];
//     }    
//     for (int i = 0; i<10; i++) printf(" %d", Z[i]);
//     return 0;
// } 