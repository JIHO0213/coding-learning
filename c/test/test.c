#define _CRT_SECURE_NO_WARNING_
#include <stdio.h>

int a_in_arr(char arr[], char a, int index){
    for (int i = 0; i<index; i++){
        if (arr[i] == a) return 1;
    }
    return 0;
}

int* sel_next(int* p){
    int flip[100], *fp = flip;
    for (int i = 0 ; *(p+1+i) != -1; i++){
        *fp++ = (*(p+1+i) > *(p+i)) ? 1:-1;
    }
    
    for (int i = 0 ; i< fp-flip; i++){
        printf("%d: %d ", i, *(flip+i));
    }

    return 0;
}


char* encoding(const char* arr, int N, int size, char* out) {
    // 출력 최대 길이: 입력 20글자 × N(최대 10) = 200, 널 문자 포함
    char *q = out;

    for (int i = 0; i < size; i++) {
        char c = arr[i];

        if (c >= 'A' && c <= 'Z') {
            // 대문자: N번째 뒤 문자
            *q++ = (c - 'A' + N) % 26 + 'A';
        }
        else if (c >= 'a' && c <= 'z') {
            // 소문자: N번째 앞 문자
            *q++ = ((c - 'a' - N) % 26 + 26) % 26 + 'a';
        }
        else if (c >= '0' && c <= '9') {
            int num = c - '0';
            // 두 자리 수(10~26)이면 다음 글자와 합치고 인덱스를 한 칸 더 진행
            if (i + 1 < size && arr[i + 1] >= '0' && arr[i + 1] <= '9') {
                num = num * 10 + (arr[i + 1] - '0');
                i++;
            }
            // 숫자 번째 대문자 (1 -> 'A', 26 -> 'Z')를 N번 반복
            char letter = 'A' + num - 1;
            for (int j = 0; j < N; j++) *q++ = letter;
        }
        else {
            *q++ = ' ';
        }
    }

    *q = '\0';
    return out;
}

void main(){
    char arr[6] = "a!10z";
    char out[100];
 encoding(arr, 1, 5, out);
    
    printf("%s\n", out);

}

