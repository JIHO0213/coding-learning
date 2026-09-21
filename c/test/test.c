#define _CRT_SECURE_NO_WARNING_
#include <stdio.h>

int a_in_arr(char arr[], char a, int index){
    for (int i = 0; i<index; i++){
        if (arr[i] == a) return 1;
    }
    return 0;
}

void main(){
    int arr[10] = {1,2,3,4,5};
    int* p1 = arr+1;
    int* p2 = arr+2;
    printf("%p %d", arr, p1 == p2);

    

}