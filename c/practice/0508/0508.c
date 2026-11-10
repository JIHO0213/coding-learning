#define CRT_NO_SECURE_WARNING
#include <stdio.h>

// 9주차 5번, 49분


int Large(char);
int Small(char);
int Vowel(char);
int main(){
    char value = '0';
    char word_arr[100];
    int word_index = 0, word_count = 0;
    while (value != '*'){
        if (Small(value)){
            word_arr[word_index] = value - 'a' + 'A';
            word_index++;
        }
        else if (Large(value)){
            word_arr[word_index] = value - 'A' + 'a';
            word_index++;
        }

        scanf("%c", &value);
    }

    for (int i = 0; i <word_index ; i++){
            printf("%c", word_arr[i]);
        }
    for (int i = 0 ; i<word_index-2; i++){
        // 첫글자 대문자 & not 모음, 두번쨰 소문자 & 모음, 세번째 소문자 & 자음
            if ((Large(word_arr[i]) && !Vowel(word_arr[i]))\
             && (Small(word_arr[i+1])&& Vowel(word_arr[i+1]))\
            && (Small(word_arr[i+2]) && !Vowel(word_arr[i+2]))){
                word_count++;
        }
    }

printf("\n%d", word_count);
    return 0;
}

// 대문자 판단
int Large(char ch){
    if (ch >= 'A' && ch <= 'Z') return 1;
    else return 0;
}
// 소문자 판단
int Small(char ch){
    if (ch >= 'a' && ch <= 'z') return 1;
    else return 0;
}
// 모음 판단
int Vowel(char ch){
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
        return 1;
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
        return 1;
    }
    else return 0;
}

