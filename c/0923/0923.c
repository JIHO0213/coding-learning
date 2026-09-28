#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PRT(int, char*);

int main(){
    char str[101], *p = str;
    char tmp = 'A';
    int cnt = 0, max = 0;
    char* maxp;
    while (tmp != '#'){
        scanf("%c", &tmp);
        if (tmp <= 'z' && tmp >= 'a'){
            *p++ = tmp;
            cnt++;
        }
        else if (*(p-1) != '\0'){
            if (cnt > max){
                max = cnt;
                maxp = p-max;
            }
            cnt = 0;
            *p = '\0';
            p++;
        }
    }
    char* end = p;

    for (p = str; p<end;){
        
        printf("%s\n", p);

        while (*p != '\0') p++;

        p++;
    }
    PRT(max, maxp);


    return 0;
}

void PRT(int n, char* p){
    printf("%d %c\n", n, *p);
    printf("%s", p);
}
// 'banana\0apple\0'
// banana25apple#