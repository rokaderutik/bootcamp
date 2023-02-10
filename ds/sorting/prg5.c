//sort according to total no of factors of no
#include <stdio.h>

int factor(int N){
	int cnt = 1;
	for(int i=2; i<=N; i++){
		if(N%i == 0)
			cnt++;
	}
	return cnt;
}

void bubbleSort(int *arr, int size){
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-1-i; j++){
			if(factor(arr[j]) > factor(arr[j+1])){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void main(){
	int arr1[] = {6,8,9};
	int arr2[] = {2,4,1};

	bubbleSort(arr1,3);
	for(int i=0; i<3; i++)
		printf("%d ", arr1[i]);
	
	printf("\n");
	bubbleSort(arr2,3);
	for(int i=0; i<3; i++)
                printf("%d ", arr2[i]);

	printf("\n");
}
