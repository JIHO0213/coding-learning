#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(){
    char tmp[200];
    char arr[21][200];
    char arr2[200];
    int cnt = 0, idx = 0;
    fgets(tmp, sizeof(tmp),stdin);
    for (int i = 0 ; tmp[i] != '\n'; i++){
        if (tmp[i] == ' ' || tmp[i] == '\n'){
            arr[cnt++][idx] = '\0';
            idx = 0;
        }
        else arr[cnt][idx++] = tmp[i];
    }
    arr[cnt][idx] = '\0';
    scanf("%s", arr2);
    
    int isdupl = 0;
    for (int i = 0; i<=cnt; i++){
        printf("%s\n", arr[i]);
        if (strcmp(arr[i], arr2) == 0) strcpy()
    }

    for (int i = 0; i<=cnt; i++){

    }   


    if (!isdupl) printf("%s\n", arr2);
    return 0;
}
/*
ant apple ace ape
arch
*/