#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int reverse_num(int);
int del_dupnum(int);

void main() {
    int N = 1;
    int dp_rev_N;
    int max = -1;
    int max_N;
    int diff;
    while (N>0){
        scanf("%d", &N);
        if (N<0) break;
        dp_rev_N = del_dupnum(reverse_num(N));
        diff = (N > dp_rev_N) ? N- dp_rev_N : dp_rev_N - N;
        printf(" %d", dp_rev_N);
        if (max < diff) {max = diff; max_N = N;}
        
    } 
    printf("\n%d %d", max_N, max);
}

int reverse_num(int N){
    int reverse = 0;
    while (N){
        reverse = reverse * 10 + N%10;
        N /= 10;
    } return reverse;
}
int del_dupnum(int x) {
    int dgt_cnt = 1;
    int result = 0;
    int visited[10] = {0};
    int tmp = x;
    int digit;
    // 1. x의 가장 큰 자릿수에 맞는 10의 거듭제곱 구하기
    // 예: tmp가 123이면 dgt_cnt는 100이 됩니다.
    while (tmp >= 10) {
        dgt_cnt *= 10;
        tmp /= 10;
    }

    // 2. 앞에서부터 한 자리씩 추출하며 중복 검사
    while (dgt_cnt > 0) {
        digit = x / dgt_cnt; // 가장 앞자리 숫자 추출

        // 이미 나온 숫자가 아니라면 결과에 추가
        if (visited[digit] == 0) {
            visited[digit] = 1;          // 사용되었다고 표시
            result = result * 10 + digit; // 결과 정수 조립
        }

        x %= dgt_cnt;     // 방금 사용한 앞자리 잘라내기
        dgt_cnt /= 10;    // 다음 자릿수로 이동
    }

    return result;
}

// int reverse_num(int N);
// int is_palindromic(int N);
// int del_digit(int N, int T);

// int main(){
//     int N, T;
//     scanf("%d %d", &N, &T);

//     printf("%d %d %d %d", N, reverse_num(N), is_palindromic(N), del_digit(N,T));

//     return 0;
// }

// int reverse_num(int N){
//     int reverse = 0;
//     while (N){
//         reverse = reverse * 10 + N%10;
//         N /= 10;
//     } return reverse;
// }
// int is_palindromic(int N){
//     if (N == reverse_num(N)) return 1;
//     return 0;
// }



// int del_digit(int N, int T){
//     int Num[9];
//     int indx = 0, result = 0;
//     int tmp = N;
//     while (tmp){indx++; tmp/= 10;}
//     tmp = N;
//     for (int i = 0; i<indx; i++){
//         Num[indx-i-1] = tmp%10;
//         tmp/= 10;
//     }
//     if (is_palindromic(N)){
//         Num[indx-T] = -1;
//         Num[T-1] = -1;
//     }// T자리, rev(T)자리 삭제 수 출력
//     else {
//         Num[indx-T] = -1;
//     }

//     for (int i = 0; i<indx; i++) {
//         //printf("%d\n", Num[i]);
//         if (Num[i] != -1) result = result * 10 + Num[i];
//     }
//     return result;
// }


// int prime_number(int num);
// int odd_number(int num);
// int main(){
//     int X[100];
//     int indx = 0;
//     int N = 1;
//     while (N > 0){
//         scanf("%d", &N);
//         if (N<0) break;
//         if (prime_number(N) || odd_number(N)){
//             X[indx++] = N;
//         }
//     }
//     if (!indx) {printf("0"); return 0;}
//     for (int i = 0; i< indx; i++) printf("%d ", X[indx-i-1]);
//     return 0;
// }

// int prime_number(int num){
//     for (int i = 2; i*i<=num; i++){
//         if (num%i == 0) return 0;
//     }
//     return 1;
// }
// int odd_number(int num){
//     while (num){
//         if ((num%10)%2 == 0) return 0;
//         num /= 10;
//     }
//     return 1;
// }

// //8분

// int is_prime(int x);
// int next_prime(int x);

// void main(){
//     int N, M;
//     scanf("%d %d", &N, &M);
    
//     for (int i = 0; i<M; i++){
//         printf(" %d", next_prime(N));
//         N = next_prime(N); // N을 다음 소수로 이동
//     }
// }

// int is_prime(int x){
//     for (int i = 2; i*i<=x; i++) if (!(x%i)) return 0;
//     return 1;
// }
// int next_prime(int x){
//     while (!is_prime(x+1)) x++; //x의 다음 수가 소수가 아니라면 증가
//     return x+1; 
// }



// int count_3(int x);

// void main(){
//     int n;
//     scanf("%d", &n);

//     int count = 0;
//     for (int i = 0; i<n; i++){
//         count += count_3(i+1);
//     }
//     printf("%d", count);
// }

// int count_3(int x){
//     int count = 0;
//     while (x){
//         if (x % 10 == 3) count++;
//         x /= 10;
//     }
//     return count;
// }



// //6분
// void print_line(int x, int y, int z);

// void main(){
//     int n;
//     scanf("%d", &n);

//     int space = n;
//     for (int i = 0; i<n; i++){
//         print_line(space, 2*i+1, space);
//         printf("\n"); 
//         space--;
//     }
    
// }

// void print_line(int x, int y, int z){
//     for (int i =0; i<x; i++) printf(" ");
//     for (int i =0; i<y; i++) printf("*");
//     for (int i =0; i<z; i++) printf(" ");   
// }

// //3분
// //2분
// int sum(int n);

// void main(){
//     int A;
//     int total = 0;
//     scanf("%d %d", &A);
//     for (int i = 1; i<=A; i++){
//         total += sum(i);
//     }
//     printf("%d", total);
// }

// int sum(int n){
//     return n*(n+1)/2;
// }
