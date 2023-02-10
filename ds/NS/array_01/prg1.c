#include <stdio.h>

int atLeastOneGreater(int arr[], int size){
	int max = arr[0];
	int cnt = 0;

	for(int i=1; i<size; i++){
		if(arr[i] > max)
			max = arr[i];
	}

	for(int i=0; i<size; i++){
		if(arr[i] == max)
			cnt++;
	}
	return size-cnt;
}

void main(){
	
	int arr[] = {3,1,2,5,4,5};
	int arr1[] = {5,5,3};

	printf("%d\n", atLeastOneGreater(arr, 6));
	printf("%d\n", atLeastOneGreater(arr1, 3));

}
