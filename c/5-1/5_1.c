#define _CRT_NO_SECURE_WARNING
#include <stdio.h>


int rev(int n){
    int reversed = 0;
    while (n>0){
        reversed = reversed * 10 + n%10;
        n /= 10;
    }
    return reversed;
}

void prime_frac(int n){
    
    for (int i =2; i<n; i++){
        int count = 0;
        while (n%i == 0){
            n /= i;
            count++;
        }
        if (count) printf("%d %d\n", i, count);
    }
    if (n>1) printf("%d %d", n, 1);
}

//24



int main(){
    int n;
    scanf("%d", &n);

    printf("%d\n",rev(n));
    prime_frac(rev(n));

    return 0;
}