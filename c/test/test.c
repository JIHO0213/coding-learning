#define _CRT_SECURE_NO_WARNING_
#include <stdio.h>

int a_in_arr(char arr[], char a, int index){
    for (int i = 0; i<index; i++){
        if (arr[i] == a) return 1;
    }
    return 0;
}

int* sel_next(int* p){
    int flip[100], *fp = flip;
    for (int i = 0 ; *(p+1+i) != -1; i++){
        *fp++ = (*(p+1+i) > *(p+i)) ? 1:-1;
    }
    
    for (int i = 0 ; i< fp-flip; i++){
        printf("%d: %d ", i, *(flip+i));
    }

    return 0;
}

void main(){
    int arr[10];

    for (int i = 0 ; i<10; i++) scanf("%d", arr+i);

    sel_next(arr);

    

}