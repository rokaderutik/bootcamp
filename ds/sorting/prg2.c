#include <stdio.h>

void bubbleSort(int *arr, int size){

	for(int j=0; j<size-1; j++){
        	if(arr[j]>arr[j+1]){
                	int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                }
		if(j==size-2){
			j=0;
			size--;
		}
        }
}

void main(){
        int arr[] = {5,1,2,4,3,5,1,9,8};

        bubbleSort(arr, 9);

        for(int i=0; i<9; i++)
                printf("%d  ",arr[i]);

        printf("\n");
}

