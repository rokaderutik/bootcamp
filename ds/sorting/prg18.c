//naive approach quicksort
#include <stdio.h>

int partition(int arr[], int start, int end){
	int arr1[end-start+1];
	int ind = 0;
	int pivot = arr[end];

	for(int i=start; i<end; i++){
		if(arr[i] <= pivot){
			arr1[ind++] = arr[i];
		}
	}

	int pivotPos = ind+start;
	arr1[ind++] = pivot;

	for(int i=start; i<end; i++){
                if(arr[i] > pivot){
                        arr1[ind++] = arr[i];
                }
        }

	for(int i=start; i<=end; i++){
                arr[i] = arr1[i-start];
        }

	return pivotPos;
}
void quickSort(int arr[], int start, int end){
        if(start < end){
                int pivot = partition(arr, start, end);

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
