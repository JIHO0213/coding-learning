#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

// 26분
int main(){
    int N1, N2;
    int indx = 0, value = 1;
    int A[100];
    while (value){
        scanf("%d", &value);
        if (value) A[indx++] = value;
    }
    int T;
    scanf("%d", &T);
    for (;T>0;T--){
        int max = -999999, min = 999999;
        scanf("%d %d", &N1, &N2);

        int start = N1, end = N2;
        while (start<end){
            value = A[start];
            A[start] = A[end];
            A[end] = value;
            start++;
            end--;
        }
        for (int i = N1; i<= N2; i++){
            if(max_num(max, A[i]) == A[i]) max = A[i];
            if(min_num(min, A[i]) == A[i]) min = A[i];
        }
        for (int i = 0; i<indx; i++) printf("%d ", A[i]);
        printf("\n%d %d\n", max, min);
    }   
    
    
    return 0;
}
    
    
int max_num(int N1, int N2){
        if (N1 > N2) return N1;
        return N2;
    }
int min_num(int N1, int N2){
        if (N1 < N2) return N1;
        return N2;
    }

/*
12 13 10 92 2 34 32 41 51 100 0
3 7
*/