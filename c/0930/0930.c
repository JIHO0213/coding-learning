#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char str1[101], str2[101];
    char *str1p = str1, *str2p = str2;
    while (scanf("%c", str1p) == 1 && *str1p != '\n') str1p++;
    *str1p = '\0';
    scanf("%s", str2);

    int len1 = strlen(str1), len2 = strlen(str2);
    int i = 0, cnt = 0;

    for (int i = 0; i+len2 <= len1;){
        int j = 0;
        while (j < len2 && *(str1+i+j) == *(str2+j)) j++;
        if (j == len2){cnt++; i+=len2;}
        else i++; 
    }
   
    printf("%d", cnt);

    
    return 0;
}
