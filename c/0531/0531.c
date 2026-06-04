#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

void main(){
    int mat[3][2];
    for (int i = 0; i<3; i++){
        for (int j = 0; j<2; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    float kor = 0, eng = 0;
    for (int i = 0; i<3; i++){
            kor += mat[i][0];
            eng += mat[i][1];
    }
    kor /= 3.0;
    eng /= 3.0;

    for (int i = 0; i<3; i++){
        if (mat[i][0] < kor) printf("%d ", mat[i][0]);
        if (mat[i][1] < eng) printf("%d ", mat[i][1]);
        printf("\n");
    }
}

/*
10 20
50 90
30 40
*/




// void swap(int* a , int* b);

// void main(){
//     int N;
//     int mat[10][10];

//     scanf("%d", &N);

//     for (int i = 0 ; i<N; i++){ for (int j = 0; j<N; j++) {scanf("%d", &mat[i][j]);}}


//     for (int i = 0 ; i<N/2; i++){ 
//         swap(&mat[i][i], &mat[N-1-i][N-1-i]);
//         swap(&mat[i][N-1-i], &mat[N-1-i][i]);
//     }


//      for (int i = 0 ; i<N; i++){ 
//         for (int j = 0; j<N; j++) {
//             printf("%d ", mat[i][j]);
//         } 
//         printf("\n");
//     }

// }


// void swap(int* a, int* b){
//     int tmp;
//     tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

/*
5
11 12 13 14 15 
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55


0,0 4,4
1,1 3,3
2,2 2,2

0,4 4,0
1,3 3,1

*/