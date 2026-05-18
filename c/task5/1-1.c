#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

char decrypt(char ch, int M);
char encrypt(char ch, int M);


/*
lveocmboox
10
*/
void main(){
    char ch[100];
    int M1, M2, indx = 0;
    char value = '1';
    while (value != '*'){
        scanf("%c", &value);
        if (value != '*') {ch[indx] = value; indx++;}
    }
    scanf("%d %d", &M1, &M2);

    for (int i = 0; i<indx; i++) printf("%c", decrypt(ch[i], M1));
    printf("\n");
    for (int i = 0; i<indx; i++) printf("%c", encrypt(decrypt(ch[i], M1), M2));

} 
char decrypt(char ch, int M){
    if (ch >= 'a' && ch <= 'z'){
        return ((ch- 'a' - M)%26 + 26)%26 + 'a';
    }   
    else if (ch >= 'A' && ch <= 'Z'){
        return ((ch- 'A' - M)%26 + 26)%26 + 'A';
    }   
    return ch;
}

char encrypt(char ch, int M){
    if (ch >= 'a' && ch <= 'z'){
        return ((ch- 'a' + M))%26 + 'a';
    }   
    else if (ch >= 'A' && ch <= 'Z'){
        return ((ch- 'A' + M))%26 + 'A';
    }   
    return ch;
}