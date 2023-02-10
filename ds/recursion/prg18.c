//if array is sorted return true

#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int size, int index){
	
	if(index == size-1)
		return true;

	return arr[index]<arr[index+1] && isSorted(arr, size, index+1);
}

void main(){
	int arr[] = {1,2,3,5,8};
	int arr1[] = {1,5,3,9,6};

	printf("%d\n", isSorted(arr,5,0));
	printf("%d\n", isSorted(arr1,5,0));
}
