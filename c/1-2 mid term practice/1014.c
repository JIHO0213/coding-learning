#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//4'46"

//5'

//9' 4번

//5' 24'11"


int main(){
    int N;
    int tmp, max = -1, cnt = 0;
    int arr[100], *ap = arr;
    scanf("%d", &N);

    for (int i = 0 ; i<N; i++){
        scanf("%d", &tmp);
        if (tmp > 0) {*ap++ = tmp;}
    }

    int len = ap-arr;

    for (int i = 0; i<len-1; i++){
        for (int j = 0; j<len-i-1; j++){
            if (*(arr+j) < *(arr+j+1)){
                tmp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = tmp;
            }
        }
    }

    printf("%d\n", len);
    for (int i = 0; i<len; i++){
        int t = (len%2) ? len-i-1:i;
        printf("%d ", *(arr+t)); //arr+len-i-1
        if (*(arr+t)%2){
            cnt++;
            if (max < cnt) max = cnt;
        }
        else {cnt = 0;}
    }
    if (max < cnt) max = cnt;

    printf("\n%d", max);

    return 0;
}