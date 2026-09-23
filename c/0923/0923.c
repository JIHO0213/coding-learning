#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char str[101], *p = str;
    char tmp = 'A';
    while (tmp != '#'){
        scanf("%c", &tmp);
        if (tmp <= 'z' && tmp >= 'a'){
            *p++ = tmp;
        }
        else if (*(p-1) != '\0'){
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
    


    return 0;
}

// 'banana\0apple\0'