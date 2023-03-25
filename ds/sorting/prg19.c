#include <stdio.h>

void countingSort(int *arr, int size){
	int min=arr[0], max=arr[0];
	for(int i=1; i<size; i++){
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
	}

	int sizeCArr = max + min*(-1) + 1;
	int countArr[sizeCArr];
	for(int i=0; i<sizeCArr; i++)
		countArr[i] = 0;

	for(int i=0; i<size; i++){
		arr[i] += min*(-1);
		countArr[arr[i]]++;
	}

	for(int i=1; i<sizeCArr; i++){
		countArr[i] += countArr[i-1];
	}

	int output[size];
	for(int i=0; i<size; i++){
		output[countArr[arr[i]]-1] = arr[i];
		countArr[arr[i]]--;
	}

	for(int i=0; i<size; i++){
		arr[i] = output[i] + min;
	}
}
void main(){
	int arr[] = {-3,7,-2,1,8,2,5,2,7,-4};
	int size = sizeof(arr)/sizeof(arr[0]);

	for(int i=0; i<size; i++)
		printf("%d ",arr[i]);
	printf("\n");

	countingSort(arr,size);
	for(int i=0; i<size; i++)
                printf("%d ",arr[i]);
        printf("\n");

}
