#include <stdio.h>

int* rotateBTimes(int arr[], int size, int B){
	int temp;

	for(int i=size-1; i>=0 && B>0; i--){
		//printf("%d",arr[i]);
		if(i == size-1){
			temp = arr[i];
			arr[i] = arr[i-1];
		} else if(i == 0){
			arr[i] = temp;
			i = size-1;
			B--;
		}else{
			arr[i] = arr[i-1];
		}
		printf("%d",arr[i]);
	}
	
	return arr;
}

void main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};

	rotateBTimes(arr, 10, 3);

	for(int i=0; i<10; i++)
                printf("%d ", *(arr+i));
}
