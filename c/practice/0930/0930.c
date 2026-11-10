#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char str[11];
    int frq[26] = {0,};
    scanf("%s", str);
    for (int i = 0; i<10; i++){
        *(frq + (*(str+i) - 'a')) += 1;
    }

    char maxch = *str;
    for (char* p = str; p-str < 10; p++){
        if (*(frq + (maxch - 'a')) < *(frq + *p - 'a')) maxch = *p;
    }
    
    printf("%c %d", maxch, *(frq + (maxch - 'a')));

    return 0;
}
