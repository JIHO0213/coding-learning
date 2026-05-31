#include<stdio.h>
#pragma warning(disable:4996)

void bubble_sort(int arr[], int start, int end){
		int tmp;
		for (int i = start; i < end-1+start; i++){
				for (int j = start; j < end-1-i+start; j++){
						if (arr[j] > arr[j+1]){
								tmp = arr[j];
								arr[j] = arr[j+1];
								arr[j+1] = tmp;
						}
				}
		}
}


int main() {
   int n[10] = {1,3,4,6,2,6,7,0,-1,4};

   bubble_sort(n, 0, 10);

   for (int i = 0; i<10; i++) printf("%d ", n[i]);
}