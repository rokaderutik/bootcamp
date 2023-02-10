//selection sort
//in each iteration smallest element of subarray is come at first position

#include <stdio.h>

void selectionSort(int arr[], int size){
	for(int i=0; i<size-1; i++){
		int minInd = i;
		for(int j=i+1; j<=size-1; j++){
			if(arr[minInd] > arr[j])
				minInd = j;
		}
		int temp = arr[minInd];
		arr[minInd] = arr[i];
		arr[i] = temp;
	}
}

void main(){
	int arr[] = {5,2,4,9,1,-5};

	selectionSort(arr, 6);

	for(int i=0; i<6; i++)
		printf("%d  ",arr[i]);

	printf("\n");
}
