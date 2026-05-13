#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

void prnt_arr(int arr[], int);
void bubble_sort(int arr[], int);

void main(){
    int n = 10;
    int arr[10] = {1,3,5,6,9,6,7,6,0,4};

    prnt_arr(arr, n);
    bubble_sort(arr,n);
    printf("\n");
    prnt_arr(arr, n);


}
void prnt_arr(int arr[], int n){
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}


void bubble_sort(int arr[], int n){
    int tmp;
    for (int i = n-1; i>0; i--){
        for (int j = 0; j<i; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}