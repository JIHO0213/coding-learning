#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    
    int all_arr[100];
    int count = 0, max = 0;
    int max_index;
    int value;
    // 전체 배열 만들기
    for (int i = 0; i<n ; i++){
        scanf("%d", &value);
        all_arr[i] = value;
    }

    for (int j = 0; j<n-1; j++){
        if ((all_arr[j] > 0 && all_arr[j+1] < 0) ||\
            (all_arr[j] < 0 && all_arr[j+1] > 0)){
                count++;
            } 
        else count = 0;

        if (max <= count) {
            max = count;
            max_index = j;
        }
    }
    max++;
    max_index++;

    printf("%d\n", max);

    for (int j = max_index - max + 1; j<=max_index; j++){
        printf("%d ", all_arr[j]);
    }
}
