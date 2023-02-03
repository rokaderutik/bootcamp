//sum of array elements using recursion

#include<stdio.h>
int sumArr(int arr[], int size){
	if(size == 1)
		return arr[size-1];

	return sumArr(arr, size-1) + arr[size-1];
}
void main(){
	int arr[] = {1, 2, 3, 4, 5};
	int arrSize = sizeof(arr)/sizeof(int);

	printf("sum = %d\n", sumArr(arr, arrSize));
}
