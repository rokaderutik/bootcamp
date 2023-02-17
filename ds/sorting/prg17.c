#include <stdio.h>
//Hourse approach
//first element pivot

int partition(int arr[], int start, int end){
	int i=start-1, j=end+1;
        int pivot = arr[start];

	while(1){
		do{
			i++;
		}while(arr[i] < pivot);

		do{
			j--;
		}while(arr[j] > pivot);

		if(i>=j)
			return j;

		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
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
