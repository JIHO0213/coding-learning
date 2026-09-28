#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int a[20], b[11];
    int* ap = a, *bp = b;
    int n = 0, m = 0;
    while (scanf("%d", ap ) == 1 && *ap != -1) {ap++; n++;}
    while (scanf("%d", bp ) == 1 && *bp != -1) {bp++; m++;}

    for (int* p = b; p<bp; p++) *ap++ = *p;

    for (int* i = a; i<ap; i++){
        for (int* j = i+1; j<ap;j++){
            if (*i>*j){
                int tmp = *i;
                *i = *j;
                *j = tmp;
            }
        }
    }
    /*
    for (int* i = a; i<ap-1; i++){
        for (int*j = a; j<ap-1 - (i-a); j++){
            if (*j> *(j+1)){
                int tmp = *j;
                *j = *(j+1);
                *(j+1) = tmp;
            }
        }
    }
    */

    for (int i = 0; i<n;i++){
        printf("%d ", *(ap-i-1));
    }
    printf("\n");
    for (int j = 0; j<m; j++){
        printf("%d ", *(a+j));
    }
    return 0;
}


/*
10 50 70 -1
20 100 -1
*/