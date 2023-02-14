//quick sort

#include <stdio.h>

void swap(int *ptr1, int *ptr2){
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int sort(int arr[], int start, int end){
	int pivot = arr[end];
	int itr = start-1;

	for(int i=start; i<end; i++){
		if(arr[i] < pivot){
			itr++;
			swap(&arr[itr], &arr[i]);
		}
	}
	swap(&arr[itr+1], &arr[end]);
	return itr+1;
}

void quickSort(int *arr, int start, int end){
	if(start < end){
		int pivot = sort(arr, start, end);

		quickSort(arr, start, pivot-1);
		quickSort(arr, pivot+1, end);
	}
}

void main(){
	int arr[] = {5,6,8,1,-5,7,3,4};
	int size = sizeof(arr)/sizeof(arr[0]);

	for(int i=0; i<size; i++)
                printf("%d ",arr[i]);
        printf("\n");

	quickSort(arr, 0, size-1);

	for(int i=0; i<size; i++)
		printf("%d ",arr[i]);
	printf("\n");
}
