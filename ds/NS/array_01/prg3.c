#include<stdio.h>
void reverseSubArr(int arr[], int size, int B, int C){
	int temp;
	for(int i=B, j=C; i<j; i++, j--){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for(int i=0; i<size; i++)
		printf("%d ", arr[i]);
}

void main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};

	reverseSubArr(arr, 10, 3, 6);
	printf("\n");
	reverseSubArr(arr, 10, 0, 9);
}
