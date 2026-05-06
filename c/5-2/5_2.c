#define CRT_NO_SECURE_WARNING
#include <stdio.h>




int Rev(int);
void Prime_Frac_Print(int);
int isPalindromic(int);
int isMax(int, int);

int main() {
    int N, reverse_N;
    int max_palindromic = 0;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        if (isPalindromic(N)) {
            printf("Yes\n");
            Prime_Frac_Print(Rev(N));

            max_palindromic = isMax(max_palindromic, Rev(N));
        }
        else {
            printf("No\n");
        }
    }

    printf("%d", max_palindromic);

}


int Rev(int n){
    int reversed = 0;
    while (n > 0){
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
// 소인수 분해 후 출력
void Prime_Frac_Print(int n){
    
    for (int i =2; i < n; i++){
        int count = 0;
        while (n % i == 0){
            n /= i;
            count++;
        }
        if (count) printf("%d %d\n", i, count);
    }
    if (n > 1) printf("%d %d", n, 1);
}

int isPalindromic(int n){
    if (n == Rev(n)) return 1;
    else return 0;

}

int isMax(int n, int m){
    if (n >= m) return n;
    else return m;
}