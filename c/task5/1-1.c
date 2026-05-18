#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

char decrypt(char ch, int M);


/*
lveocmboox
10
*/
void main(){
    char ch[10];
    int M;
    //for (int i = 0; i<10; i++) {scanf("%c", &ch[i]);}
    //scanf("%d", &M);


    //for (int i = 0; i<10; i++) printf("%c", decrypt(ch[i], M));

    printf("%d", 'z'); // 96%26
} 
char decrypt(char ch, int M){
    if (ch >= 'a' && ch <= 'z'){
        if (ch - M -'a' < 0) return ch - M +26;
        return (ch - M)%26 + 'a';
    } // 'a' 1 -1 

    // abcd 1 'z' + 1 = 'a'
    // 'a' = 97
    // 'z' = 122
    // zabc  -> 'a' - 1 = 'z'
    // ('z' -'a' + 1)%26 + 'a' = 'a'
    // ('a' - 1)%26 
    else if (ch >= 'A' && ch <= 'Z'){
        return (ch - 'A' - M )%26 + 'A';
    }
    return ch;
}