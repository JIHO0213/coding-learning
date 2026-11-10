#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char arr[100], *ap = arr;
    char* best = arr;

    while (scanf("%c", ap) && *ap != '\n'){
        if (*ap == ' ') *ap = '\0';
        ap++;
    }
    *ap = '\0';
    for (char* p = arr+1; p<ap; p++){
        if (*(p-1) == '\0'){
            if (strcmp(p, best) <0) best = p;
        }
    }


    printf("%s", best);
    
    return 0;
}