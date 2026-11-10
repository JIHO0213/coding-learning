#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* MAX(int*);
int* MIN(int*);



int main(){
    int N;
    int ar[100];
    int* ap = ar;
    int* MAXp,* MINp;
    scanf("%d", &N);

    for (int i=0; i<N; i++){
        int tmp = 1;
        int cnt = 0;
        
        while (tmp != 0){
            scanf("%d", &tmp);
            *ap = tmp;
            ap++;
            cnt++;
        } 
        ap = ar;
        MAXp = MAX(ar);
        MINp = MIN(ar);

        if ((MAXp - MINp <= 1) && (MAXp - MINp >= -1)){ //MAXp == MINp -> 주의!
            printf("none");
        }
        else if (MAXp > MINp){
            for (int* p=MINp+1; p<MAXp; p++){
                printf("%d ", *p);
            }
        }
        else{
            for (int* p=MAXp+1; p<MINp; p++){
                printf("%d ", *p);
            }
        }
        printf("\n");
    }




    return 0;
}

int* MAX(int* ar){
    int* p = ar;
    int* max = p;
    for (; *p != 0; p++) {if (*max < *p) max = p;}
    return max;
}
int* MIN(int* ar){
    int* p = ar;
    int* min = p;
    for (; *p != 0; p++) {if (*min > *p) min = p;}
    return min;

}