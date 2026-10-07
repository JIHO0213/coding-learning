#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    char str1[101], str2[101], result[251];
    
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int len1 = strlen(str1), len2 = strlen(len2);
    str1[len1-1] = '\0'; str2[len2-1] = '\0';



    /*
red orange red yellow green red blue purple yellow
white black gray pink brown blush crimson garnet vermilion indigo
    */
    //str1 정렬 해놓고 중복 확인하기
    //str1 단어 구분하기 & 

    int idx[100];
    int idx_i = 1;

    idx[0] = 0;
    for (int i = 0; i<len1; i++){
        if (str1[i]== ' '){
            idx[idx_i++] = i;
        }
    }

    for(int i = 0; i<idx_i; i++){
        printf("%d ", idx[i]);
    }








    //중복 자리에 밀고 str2 넣기



    return 0;
}