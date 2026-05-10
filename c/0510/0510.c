#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

void main(){
    int num[10];
    for (int i = 0; i<10; i++) scanf("%d", &num[i]);
    

    
    /*
    // #1. 순회 여러번
    
    for (int j = 1; j<=3; j++){
        printf("%d:", j);
        for (int i = 0; i<10; i++) if (num[i] == j) printf("*");
        printf("\n");
        }
        */
       
       // #2 개수 배열 생성
       int count[3] = {0,0,0};
       for (int i = 0; i<10; i++){
        if (num[i] == 1) count[0]++;
        else if (num[i] == 2) count[1]++;
        else count[2]++;
    }
    for (int j = 0; j<3; j++){
        printf("%d:", j+1);
        for (int i = 0; i<count[j]; i++) printf("*");
        printf("\n");
    }
    
    
}



// 12분
// void main(){
//     int N;
//     scanf("%d", &N);

//     char x_text[10];
//     int x_number[10];
//     // scanf 앞 공백으로 \n 문자 무시
//     for (int i = 0 ; i <N; i++) scanf(" %c", &x_text[i]);
//     for (int i = 0 ; i <N; i++) scanf("%d", &x_number[i]);

//     // x[%d %% %d] = x[%d] =     %c
//     //  x_n     N    x_n%N    x_t[x_n%N]
//     for (int i = 0 ; i <N; i++){
//         printf("x[%d%%%d]=x[%d]=%c\n"\
//             , x_number[i], N, x_number[i]%N, x_text[x_number[i]%N]);
//     }

// }