#include <stdio.h>

int main(){
    int arr[] = {1,201,3};
    printf("%p\n", *arr);
    printf("%d\n", arr[0]);
    printf("%d", *(arr+1));

    return 0;
}