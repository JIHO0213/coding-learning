#define CRT_NO_SECURE_WARNING
#include <stdio.h>

int main(){
    int n;
    char N[10];

    scanf("%d", &n);

    int temp = n;
    int i = 0;

    while (temp > 1) {
        N[9-i] = temp%10;
        temp /= 10;
        i++;
    }
    for (int i = 0; i<10; i++) printf("%d", N[i]);

    return 0;
}


















// int main(){
//     int num[5];
//     for (int i = 0; i<5; i++) scanf("%d", &num[i]);

//     int first, second;
//     if (num[0] > num[1]){
//         first = num[0];
//         second = num[1];
//     }
//     else {
//         first = num[1];
//         second = num[0];
//     }

//     for (int i = 2; i<5; i++){
//         if (num[i] > first){
//             second = first;
//             first = num[i];
//         }
//         else if (num[i] > second){
//             second = num[i];
//         }

//     }

//     printf("%d\n%d", first, second);
//     return 0;
// }





// int main(){
//     int X[10], Y[10], Z[10];
    
//     for (int i = 0 ;i<10; i++){
//         scanf("%d", &X[i]);
//     }
//     for (int i = 0 ;i<10; i++){
//         scanf("%d", &Y[i]);
//     }
//     for (int i = 0; i<10; i++){
//         Z[i] = X[i] + Y[9-i];
//     }    
//     for (int i = 0; i<10; i++) printf(" %d", Z[i]);
//     return 0;
// } 