#include<stdio.h>
void bubbleSort(int *arr, int size){
        for(int i=0; i<size-1; i++){
                for(int j=0; j<size-1-i; j++){
                        if(arr[j] > arr[j+1]){
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }
}

void mergeArr(int *arr1, int *arr2, int *arr, int m, int n){
	for(int i=0, j =0, k=0; i<m+n; i++){
		if(j != m && k != n){
			if(arr1[j] < arr2[k])
				arr[i] = arr1[j++];
			else
				arr[i] = arr2[k++];
		} else {
			if(j != m)
				arr[i] = arr1[j++];
			else
				arr[i] = arr2[k++];
		}
	}
}
void main(){
        int arr1[] = {6,9,3};
        int arr2[] = {2,4,1,7,-5};

	int arr[8];

        bubbleSort(arr1,3);
	bubbleSort(arr2, 5);

        for(int i=0; i<3; i++)
                printf("%d ", arr1[i]);

        printf("\n");
	for(int i=0; i<5; i++)
                printf("%d ", arr2[i]);

        printf("\n");

	mergeArr(arr1, arr2, arr, 3, 5);
	for(int i=0; i<8; i++)
                printf("%d ", arr[i]);

        printf("\n");
}
