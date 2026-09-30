#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Convertor(char);

int main(){
    char str[9] = {0,};
    char result[16], *rp = result;

    scanf("%s", str);

    for (int i =0; *(str+i) != '\0'; i++){
        
        *rp++ = *(str+i);

        if (*(str+i+1) == '\0') break;

        int n = Convertor(*(str+i));
        int n_1 = Convertor(*(str+i+1));

        if (n%2 && n_1%2) *rp++ = '+';
        else if ((n%2 == 0) && (n_1%2 == 0)) *rp++ = '*';

        // "*+"[n%2] : 홀수일때 '+', 짝수일떄 '*'
        // ^ : XOR 연산자
        // (a ^ b) & 1 : 의미?
    }
    *rp = '\0';

    printf("%s", result);
    return 0;
}

int Convertor(char s){
    return (int)(s-'0');
}