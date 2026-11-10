#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//6:20 ~ 6:26
//6:26 ~ 6:47, 6:54
//7:18 ~ 7:24
//7:27 ~ 7:44
//12:11 ~ 12:24
//12:24 ~ 12:40
//12:40 ~ 12:50
//1:02 ~ 1:32
//1:32 ~ 1:48

//3:03 ~ 3:19   1-2
//3:20 ~ 3:39   3-2
//3:39 ~ 3:48   4-2
//3:50 ~ 4:20   2-2

//5:09 ~ 5:34
//5:34 ~ 5:44
//5:44 ~ 6:30

int wordsplit(char* arr, char word[][300]){
    int len = strlen(arr);
    int col = 0, row = 0;
    for (int i = 0; i<len+1; i++){
        if (arr[i] == ' ' || arr[i] == '\0'){
            word[col++][row] = '\0'; 
            row = 0;
        }
        else {word[col][row++] = arr[i];}
    }
    return col;
}


int main(){
    char arr1[300], arr2[300], *a1p = arr1, *a2p = arr2;
    char word1[300][300], word2[300][300];
    while (scanf("%c", a1p) == 1 && *a1p != '\n') a1p++;
    while (scanf("%c", a2p) == 1 && *a2p != '\n') a2p++;
    *a1p = '\0'; *a2p = '\0';

    int col1 = wordsplit(arr1, word1);
    int col2 = wordsplit(arr2, word2);

    int dupl[300], didx = 0;
    for (int i = 0; i<col1; i++){
        for (int j = i+1; j<col1; j++){
            if (strcmp(word1[i], word1[j]) == 0){
                dupl[didx++] = j;
                break;
            }
        }
    }
    for (int i = 0; i<didx; i++){
        strcpy(word1[dupl[i]], word2[i]);
    }
    char result[300];
    strcpy(result, word1[0]);
    strcpt(result, " ");
    for (int i = 1; i<col1; i++){
        strcat(result, word1[i]);
        strcat(result, " ");
    }

    printf("%s", result);
    return 0;
}

/*
red orange red yellow green red blue purple yellow
white black gray pink brown blush crimson garnet vermilion indigo



for (int* p = arr; p<arr+n-1; p++){
    for (int* q = arr; q<arr+n-1-(p-arr);q++){
        if (*q < *(q+1)){
        }
    }
}
*/