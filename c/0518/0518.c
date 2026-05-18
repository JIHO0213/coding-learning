#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

int del_dupnum(int);

void main(){
    del_dupnum(123456);
}

int del_dupnum(int x){
    
}

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
