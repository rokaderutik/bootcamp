//print array using function
#include <stdio.h>
void printArr1(int *ptr, int n){
	for(int i=0; i<n; i++)
		printf("%d\n", *(ptr + i));
}

void printArr2(int arr[], int n){
	for(int i=0; i<n; i++)
		printf("%d\n", *(arr + i));
}

void main(){
	int arr[] = {10, 20, 30, 40};
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	printArr1(arr, arrSize);
	printArr2(arr, arrSize);
}
