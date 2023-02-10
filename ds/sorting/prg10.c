//insertion sort
#include <stdio.h>
void insertionSort(int *arr, int size){
	for(int i=0; i<=size-1; i++){
		int val = arr[i];
		int j;
		for(j=i-1; j>=0 && val<arr[j]; j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = val;
	}
}
void main(){
	int arr[] = {5,10,2,6,3,4,8,9,7,1};

	for(int i=0; i<10; i++)
                printf("%d ", arr[i]);

	printf("\n");

	insertionSort(arr, 10);

	for(int i=0; i<10; i++)
                printf("%d ", arr[i]);

        printf("\n");
}
