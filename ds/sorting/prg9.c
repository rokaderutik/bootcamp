//insertion my trial code

#include<stdio.h>
void insertionSort(int arr[], int size){
	for(int i=0; i<=size-1; i++){
		int temp = arr[i];
		int j;
		for(j=i-1; j>=0; j--){
			if(arr[j] > temp){
				arr[j+1] = arr[j];
			}else{
				arr[j+1] = temp;
				break;
			}
		}
		if(j==-1)
			arr[j+1] = temp;
	}
}
void main(){
        int arr[] = {7,10,5,2,6,4,3,1,9,8};
	
	for(int i=0; i<10; i++)
		printf("%d ", arr[i]);

        insertionSort(arr, 10);

	printf("\n");
	for(int i=0; i<10; i++)
                printf("%d ", arr[i]);

	printf("\n");
}

