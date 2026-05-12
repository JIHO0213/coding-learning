#define _CRT_SECURE_NO_WARNING_
#include <stdio.h>

int a_in_arr(char arr[], char a, int index){
    for (int i = 0; i<index; i++){
        if (arr[i] == a) return 1;
    }
    return 0;
}

void main(){
    char n[5] = {'1','2','3','4','5'};
    printf("%d", a_in_arr(n,'a',5));
}